#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string.h>

using namespace std;
class Human {
protected:
    char* name;
public:
    Human (char* s);
    char* getName();
    void setName(char* s);
    void showData();

};

#endif // HUMAN_H
