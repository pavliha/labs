//
// Created by pavel on 3/31/17.
//

#include "MyString.h"


MyString::MyString(char *str) {
    this->str = str;
}

ostream &operator<<(ostream &out, const MyString &myString) {
    out << myString.str;
    return out;
}

size_t MyString::count() {
    return sizeof this->str - 1;
}

MyString MyString::operator+(MyString &myString) {
    this->str = (char *) strcat((char *) this->str, (char *) myString.str);
    return *this;
}

bool MyString::hasString(char *subString) {
    char *output = NULL;
    output = strstr((char *) this->str, (char *) subString);

    return output != nullptr;
}

void MyString::str_replace(char *target, const char *needle, const char *replacement) {
    char buffer[1024] = {0};
    char *insert_point = &buffer[0];
    const char *tmp = target;
    size_t needle_len = strlen(needle);
    size_t repl_len = strlen(replacement);

    while (1) {
        const char *p = strstr(tmp, needle);

        // walked past last occurrence of needle; copy remaining part
        if (p == NULL) {
            strcpy(insert_point, tmp);
            break;
        }

        // copy part before needle
        memcpy(insert_point, tmp, p - tmp);
        insert_point += p - tmp;

        // copy replacement string
        memcpy(insert_point, replacement, repl_len);
        insert_point += repl_len;

        // adjust pointers, move on
        tmp = p + needle_len;
    }

    // write altered string back to target
    strcpy(target, buffer);
}


MyString MyString::replace(char *needle, char *replacement) {
    str_replace(this->str, needle, replacement);

    return *this;
}