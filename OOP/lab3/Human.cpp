//
// Created by pavel on 4/21/17.
//

#include "Human.h"

void Human::setMiddleName(string middleName) {
    this->middleName = middleName;
}

string Human::getMiddleName() {
    return this->middleName;
}

string Human::getName() {
    return this->name;
}

void Human::setName(string name) {
    this->name = name;
}

string Human::getLastName() {
    return this->lastName;
}

void Human::setLastName(string lastName) {
    this->lastName = lastName;
}

string Human::getBirthDate() {
    return this->birthDate;
}

void Human::setBirthDate(string birthDate) {
    this->birthDate = birthDate;
}

string Human::getGender() {
    return  this->gender;
}

void Human::setGender(string gender) {
    this->gender = gender;
}
