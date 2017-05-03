//
// Created by pavel on 3/3/17.
//

#include "Complex.h"


#pragma once

using namespace std;

Complex Complex::multiply(Complex &com) {
    double i, j;
    i = this->re * com.re - this->im * com.im;
    j = this->re * com.im + com.re * this->im;
    this->re = i;
    this->im = j;
    return *this;
}

Complex Complex::devide(Complex &com) {
    double i, j, k;
    k = re * re + com.im * com.im;
    i = (re * com.re + im * com.im) / k;
    j = (com.re * im - re * com.im) / k;
    re = i;
    im = j;
    return *this;
}


Complex Complex::add(Complex com) {
    this->re = this->re + com.re;
    this->im = this->im + com.im;
    return *this;
}

Complex Complex::subtract(Complex com) {
    this->re = this->re - com.re;
    this->im = this->im - com.im;
    return *this;
}


ostream &operator<<(ostream &out, const Complex &com) {
    if (com.im < 0)
        out << com.re << "+i(" << com.im << ")\n";
    else
        out << com.re << "+i" << com.im << "\n";
    return out;
}

istream &operator>>(istream &in, Complex &com) {
    cout << "Введите действительную часть комплексного числа ";
    in >> com.re;
    cout << "Введите мнимую часть комплексного числа ";
    in >> com.im;
    return in;
}

Complex Complex::abs(Complex com) {
    this->re = std::abs(this->re);
    this->im = std::abs(this->im);
    return *this;
}