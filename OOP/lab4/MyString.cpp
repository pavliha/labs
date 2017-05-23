//
// Created by pavel on 3/31/17.
//

#include "MyString.h"


ostream &operator<<(ostream &out, const MyString &myString) {
    return  out << myString.str;
}

MyString MyString::operator+(MyString &myString) {
    this->str = this->str + myString.str;
    return *this;
}

size_t MyString::count() {
    return sizeof this->str - 1;
}


