#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;


int main() {

    char s[] = "string";

    char st[] = "st";

    char rp[] = "mt";

    MyString myString(s);


    cout << "Replacing:" << myString.replace(st,rp) << endl;

    string check = myString.hasString(st) ? "true": "false";

    cout << "Checking if has a string " << st << ": " << check << endl;

    cout << "Count string: " << myString.count() << endl;

    MyString myString1 = myString + myString;

    cout << "Concatenate string: " << myString1 << endl;
    return 0;
}