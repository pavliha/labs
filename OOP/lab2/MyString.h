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
    char *str;

public:
    MyString(char *);

    size_t count();

    friend ostream &operator<<(ostream &, const MyString &);

    MyString operator+(MyString &);

    bool hasString(char *);

    MyString replace(char* needle, char*replacement);

private:
    void str_replace(char *target, const char *needle, const char *replacement);

};


#endif //LAB2_MYSTRING_H
