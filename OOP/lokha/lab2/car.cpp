#include "car.h"

Car::Car(char *str):maxLength(65535)
{
    cout<<"Object has been created"<<endl;
    buffer=new char[maxLength];
    Dinam_prisv(str);
}

Car::~Car()
{
    cout<<"Object has been destroyed"<<endl;
    delete[]buffer;
}

void Car::Dinam_prisv(char* str)
{
    int charsToWrite=std::min(maxLength-GetLength(),(int)strlen(str));
    strncpy(buffer,str,charsToWrite);//из str будет копировано в buffer количество символов, которое равно charsToWrite
}
void Car::Konkatenation(char* str)
{
    int charsToWrite=std::min(maxLength-GetLength(),(int)strlen(str));
    strncat(buffer,str,charsToWrite);
}
void Car::Show()
{
    cout<<buffer;
}

int Car::GetLength()
{
    return strlen(buffer);
}