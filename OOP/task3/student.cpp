#include "student.h"

Student::Student(char *s, int n): Human(s){
    zk_number = n;
}

int Student::getZk_number(){
    return zk_number;
}

void Student::setZk_number(int n)
{
    zk_number=n;
}

void Student::showData(){
    cout<<"name: "<<name<<endl;
    cout<<"zk_number: "<<zk_number<<endl;
}
