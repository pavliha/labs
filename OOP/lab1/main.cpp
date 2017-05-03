#include <iostream>
#include "Complex.h"

using namespace std;


int main() {

    Complex complex1;
    Complex complex2;

    cin >> complex1;
    cin >> complex2;

    cout << "Выберите операцию:";

    string operation;
    cin >> operation;
    if (operation == "+"){
        Complex sum = complex1.add(complex2);
        cout << "Сложение: " <<  sum << endl;
    }

    if (operation == "-"){
        Complex subtract = complex1.subtract(complex2);
        cout << "Вычитание: " << subtract << endl;
    }

    if (operation == "abs"){
        Complex abs = complex1.abs(complex2);
        cout << "Модуль: " << abs << endl;
    }

    if (operation == "*"){
        Complex multiply = complex1.multiply(complex2);
        cout << "Умножение: " << multiply << endl;
    }

    if (operation == "/"){
        Complex devide = complex1.devide(complex2);
        cout << "Деление: " << devide << endl;
    }


}