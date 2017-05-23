//
// Created by pavel on 3/31/17.
//

#ifndef LAB2_MYSTRING_H
#define LAB2_MYSTRING_H

#include <cstring>
#include <iostream>

using namespace std;


class MyString {
protected:

    string str;

public:
    MyString(string str) {
        this->str = str;
    }

    size_t count();

    friend ostream &operator<<(ostream &, const MyString &);

    bool hasString(string subString) {
        size_t pos = this->str.find(subString);
        return pos != std::string::npos;
    }

    MyString operator+(MyString &);


    string replace(string const & search, string const & replace ) {
        size_t pos = 0;
        while ( ( pos = this->str.find( search, pos ) ) != std::string::npos ) {
            this->str.replace( pos, search.length(), replace );
            pos += replace.length();
        }
        return this->str;
    }

};


#endif //LAB2_MYSTRING_H
