#include "car.h"

istream &insetup (istream &ifs)
{
  ifs.setf(ios::skipws);
  return ifs;
}

ostream &outsetup (ostream &ofs)
{
     ofs.fill(' ');
     ofs<<setw(2);
     return ofs;
}

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
    ifstream ifs("1.txt");

    if (ifs.is_open())
    {

        int charsToWrite=std::min(maxLength-GetLength(),(int)strlen(str));
        strncpy(buffer,str,charsToWrite);//из str будет копировано в buffer количество символов,
                                    //которое равно charsToWrite
    }
    ifs.close();
}

void Car::Konkatenation(char* str)
{
    ifstream ifs("1.txt");
    if (ifs.is_open())
    {
    int charsToWrite=std::min(maxLength-GetLength(),(int)strlen(str));
    strncat(buffer,str,charsToWrite);
    }
    ifs.close();
}

void Car::Show()
{
    ofstream ofs("1.txt");
    if (ofs.is_open())
    {
    cout<<buffer;
    }
    ofs.close();
}

int Car::GetLength()
{
    ifstream ifs("1.txt");
    if (ifs.is_open())
    {
    return strlen(buffer);
    }
    ifs.close();
}
