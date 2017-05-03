#include <iostream>
#include "Employee.h"

int main() {

    Employee employee;

    employee.setName("Павел");
    employee.setMiddleName("Николаевич");
    employee.setLastName("Костюк");
    employee.setBirthDate("02/12/1998");
    employee.setGender("male");
    employee.setId(10);
    employee.setStartsWork("16:00");
    employee.setEndsWork("20:00");
    employee.setPosition("Физик-ядерщик");


    cout << employee.getName() << endl;
    cout << employee.getMiddleName() << endl;
    cout << employee.getLastName() << endl;
    cout << employee.getBirthDate() << endl;
    cout << employee.getGender() << endl;
    cout << employee.getId() << endl;
    cout << employee.getStartsWork() << endl;
    cout << employee.getEndsWork() << endl;
    cout << employee.getPosition() << endl;


    return 0;
}