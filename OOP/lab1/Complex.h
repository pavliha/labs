//
// Created by pavel on 3/3/17.
//

#ifndef LAB1_COMPLEX_H
#define LAB1_COMPLEX_H

#include <iostream>
#include <sstream>
#include <cmath>
#include <string>

using namespace std;

class Complex {
private:
    double re, im;
public:
    Complex() {
        re = 0;
        im = 0;
    }

    Complex(double r, double i) {
        re = r;
        im = i;
    }

    Complex(const Complex &ob) {
        re = ob.re;
        im = ob.im;
    };

    Complex add(Complex);

    Complex subtract(Complex);

    Complex multiply(Complex &);

    Complex devide(Complex &);

    Complex abs(Complex);

    friend istream &operator>>(istream &, Complex &);

    friend ostream &operator<<(ostream &, const Complex &);

};


#endif //LAB1_CALCULATOR_H

