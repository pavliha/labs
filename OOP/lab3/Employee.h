//
// Created by pavel on 4/21/17.
//

#include "Human.h"

class Employee : public Human {
protected:
    int id;
    string startsWork;
    string endsWork;
    string position;
public:
    Employee();

    int getId();

    string getStartsWork();

    string getEndsWork();

    string getPosition();


    void setId(int);

    void setStartsWork(string);

    void setEndsWork(string);

    void setPosition(string);
};
