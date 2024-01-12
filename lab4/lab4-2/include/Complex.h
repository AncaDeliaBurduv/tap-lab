#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

using namespace std;

class Complex {
public:
        double re, im;

        Complex(int re = 0, int im = 0);
        inline Complex(const Complex& c);
        ~Complex();
        Complex& operator=(const Complex&);

        double modul();
        Complex conjugat();

        Complex operator+(const Complex&);
        Complex operator-(const Complex&);
        Complex operator*(const Complex&);
        Complex operator/(const Complex&);

        bool operator==(const Complex&);
        bool operator!=(const Complex&);
        bool operator>(const Complex&);
        bool operator>=(const Complex&);
        bool operator<(const Complex&);
        bool operator<=(const Complex&);

        Complex& operator+=(const Complex&);
        Complex& operator-=(const Complex&);
        Complex& operator*=(const Complex&);
        Complex& operator/=(const Complex&);

        Complex& operator++();
        Complex operator++(int dummy);
        Complex& operator--();
        Complex operator--(int dummy);

        ostream& operator<<(ostream& o) const;
        istream& operator>>(istream& i);
};

#endif
