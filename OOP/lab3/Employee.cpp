//
// Created by pavel on 4/21/17.
//

#include "Employee.h"

Employee::Employee() {

}

void Employee::setPosition(string position) {
    this->position = position;
}

int Employee::getId() {
    return id;
}

string Employee::getStartsWork() {
    return startsWork;
}

string Employee::getEndsWork() {
    return endsWork;
}

string Employee::getPosition() {
    return position;
}

void Employee::setId(int id) {
    this->id = id;

}

void Employee::setStartsWork(string startsWork) {
    this->startsWork = startsWork;

}

void Employee::setEndsWork(string endsWork) {
    this->endsWork = endsWork;
}
