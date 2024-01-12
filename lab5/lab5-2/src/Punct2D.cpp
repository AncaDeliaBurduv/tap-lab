#include "Punct2D.h"
#include <iostream>
#include <math.h>

Punct2D::Punct2D(double x, double y) : x(x), y(y) {}
Punct2D::Punct2D(const Punct2D& o) {
	this->x = o.x;
	this->y = o.y;
}
Punct2D::~Punct2D() {}

Punct2D& Punct2D::operator=(const Punct2D& p) {
	this->x = p.x;
	this->y = p.y;
	return *this;
}

double Punct2D::distanta(const Punct2D& p1, const Punct2D& p2) {
	return (sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2)));
}

Punct2D Punct2D::operator+(const Punct2D& p) const {
	Punct2D rez;
	rez.x = this->x + p.x;
	rez.y = this->y + p.y;
	return rez;
}
Punct2D Punct2D::operator-(const Punct2D& p) const {
	Punct2D rez;
	rez.x = this->x - p.x;
	rez.y = this->y - p.y;
	return rez;
}
Punct2D Punct2D::operator*(const Punct2D& p) const {
	Punct2D rez;
	rez.x = this->x * p.x;
	rez.y = this->y * p.y;
	return rez;
}
Punct2D Punct2D::operator/(const Punct2D& p) const {
	Punct2D rez;
	rez.x = this->x / p.x;
	rez.y = this->y / p.y;
	return rez;
}

bool Punct2D::operator<(const Punct2D& p) const {
	return ((sqrt(pow(this->x, 2) + pow(this->y, 2))) < (sqrt(pow(p.x, 2) + pow(p.y, 2))));
}
bool Punct2D::operator<=(const Punct2D& p) const {
	return ((sqrt(pow(this->x, 2) + pow(this->y, 2))) <= (sqrt(pow(p.x, 2) + pow(p.y, 2))));
}
bool Punct2D::operator>(const Punct2D& p) const {
	return ((sqrt(pow(this->x, 2) + pow(this->y, 2))) > (sqrt(pow(p.x, 2) + pow(p.y, 2))));
}
bool Punct2D::operator>=(const Punct2D& p) const {
	return ((sqrt(pow(this->x, 2) + pow(this->y, 2))) >= (sqrt(pow(p.x, 2) + pow(p.y, 2))));
}
bool Punct2D::operator==(const Punct2D& p) const {
	return ((sqrt(pow(this->x, 2) + pow(this->y, 2))) == (sqrt(pow(p.x, 2) + pow(p.y, 2))));
}
bool Punct2D::operator!=(const Punct2D& p) const {
	return ((sqrt(pow(this->x, 2) + pow(this->y, 2))) != (sqrt(pow(p.x, 2) + pow(p.y, 2))));
}

Punct2D& Punct2D::operator+=(const Punct2D& p) {
	this->x = this->x + p.x;
	this->y = this->y + p.y;
	return *this;
}
Punct2D& Punct2D::operator-=(const Punct2D& p) {
	this->x = this->x - p.x;
	this->y = this->y - p.y;
	return *this;
}
Punct2D& Punct2D::operator*=(const Punct2D& p) {
	this->x = this->x * p.x;
	this->y = this->y * p.y;
	return *this;
}
Punct2D& Punct2D::operator/=(const Punct2D& p) {
	this->x = this->x / p.x;
	this->y = this->y / p.y;
	return *this;
}

Punct2D& Punct2D::operator++() {
	this->x++;
	this->y++;
	return *this;
}
Punct2D Punct2D::operator++(int dummy) {
	Punct2D init = *this;
	this->x++;
	this->y++;
	return init;
}
Punct2D& Punct2D::operator--() {
	this->x--;
	this->y--;
	return *this;
}
Punct2D Punct2D::operator--(int dummy) {
	Punct2D init = *this;
	this->x--;
	this->y--;
	return init;
}
ostream& Punct2D::operator<<(ostream& os) const {
	os << "("<<this->x<<","<<this->y<<")";
	return os;
}
istream& Punct2D::operator>>(istream& is) {
	cout << "x: ";
	is >> this->x;
	cout << "y: ";
	is >> this->y;
	return is;
}
