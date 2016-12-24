#include <iostream>
#include <regex>

using namespace std;
int main()
{

    regex exp ("<(.*?)>");
    string str = "<html>\n"
            " <head>\n"
            "  <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
            "  <title>Моя первая веб-страница</title>\n"
            " </head>\n"
            " <body>\n"
            "\n"
            "  <h1>Заголовок страницы</h1>\n"
            "  <p>Основной текст.</p>\n"
            "\n"
            " </body>\n"
            "</html>";


    smatch res;

    string::const_iterator searchStart( str.cbegin() );
    while ( regex_search( searchStart, str.cend(), res, exp ) )
    {
        cout << ( searchStart == str.cbegin() ? "" : " " ) << res[0];
        searchStart += res.position() + res.length();
    }
    cout << endl;
    return 0;
}