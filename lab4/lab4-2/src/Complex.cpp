#include "complex.h"
#include<iostream>
#include<math.h>
using namespace std;

Complex::Complex(int re, int im) :re(re), im(im) {}
Complex::Complex(const Complex& c) {
        this->re = c.re;
        this->im = c.im;
}
Complex::~Complex() {}

Complex& Complex::operator=(const Complex& o) {
	this->re = o.re;
	this->im = o.im;
	return *this;
}

Complex Complex::conjugat() {
    Complex rez;
    rez.re = this->re;
    rez.im = -this->im;
    return rez;
}

double Complex::modul(){
    return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

Complex Complex::operator+(const Complex& c) {
    Complex rez;
    rez.re = this->re + c.re;
    rez.im = this->im + c.im;
    return rez;
}

Complex Complex::operator-(const Complex& c) {
    Complex rez;
    rez.re = this->re - c.re;
    rez.im = this->im - c.im;
    return rez;
}

Complex Complex::operator*(const Complex& c) {
    Complex rez;
    rez.re = this->re * c.re - this->im * c.im;
    rez.im = this->im + c.im + this->im * c.re;
    return rez;
}

Complex Complex::operator/(const Complex& c) {
    Complex rez;
    rez.im = pow(this->re, 2) + pow(c.im, 2);
    rez.re = ((this->re * c.re) + (this->im * c.im)) / rez.im + ((c.re * this->im - this->re * c.im) / rez.im);
    return rez;
}

bool Complex::operator==(const Complex& c) {
    if (this->re == c.re && this->im == c.im)
        return true;
    else return false;
}

bool Complex::operator!=(const Complex& c) {
    if (this->re != c.re || this->im != c.im)
        return true;
    else return false;
}

bool Complex::operator>(const Complex& c) {
    if (this->re == c.re && this->im > c.im)
        return true;
    else if (this->re > c.re && (this->im >= c.im || this->im < c.im))
        return true;
    else return false;
}

bool Complex::operator>=(const Complex& c) {
    if (this->re == c.re && this->im >= c.im)
        return true;
    else if (this->re >= c.re && (this->im <= c.im || this->im > c.im))
        return true;
    else return false;
}

bool Complex::operator<(const Complex& c) {
    if (this->re == c.re && this->im < c.im)
        return true;
    else if (this->re < c.re && (this->im <= c.im || this->im > c.im))
        return true;
    else return false;
}

bool Complex::operator<=(const Complex& c) {
    if (this->re == c.re && this->im <= c.im)
        return true;
    else if (this->re <= c.re && (this->im <= c.im || this->im > c.im))
        return true;
    else return false;
}

Complex& Complex::operator+=(const Complex& c) {
    this->re = this->re + c.re;
    this->im = this->im + c.im;
	return *this;
}
Complex& Complex::operator-=(const Complex& c) {
    this->re = this->re - c.re;
    this->im = this->im - c.im;
	return *this;
}
Complex& Complex::operator*=(const Complex& c) {
    this->re = this->re * c.re - this->im * c.im;
    this->im = this->im + c.im + this->im * c.re;
	return *this;
}
Complex& Complex::operator/=(const Complex& c) {
    this->im = pow(this->re, 2) + pow(c.im, 2);
    this->re = ((this->re * c.re) + (this->im * c.im)) / this->im + ((c.re * this->im - this->re * c.im) / this->im);
	return *this;
}

Complex& Complex::operator++() {
	this->re += 1;
	return *this;
}
Complex  Complex::operator++(int dummy) {
	Complex old = *this;
	this->re += 1;
	return old;
}
Complex& Complex::operator--() {
	this->re -= 1;
	return *this;
}
Complex  Complex::operator--(int dummy) {
	Complex old = *this;
	this->re -= 1;
	return old;
}

ostream& Complex::operator<<(ostream& o) const{
    o << this->re << "+" << this->im << "i" << endl;
    return o;
}
istream& Complex::operator>>(istream& i){
    i >> this->re >> this->im;
    return i;
}
