#ifndef STUDENT_H
#define STUDENT_H

#include "human.h"

class Student: public Human{
protected:
    int zk_number;
public:
    Student(char* s, int n);
    int getZk_number();
    void setZk_number(int n);
    void showData();
};

#endif // STUDENT_H
