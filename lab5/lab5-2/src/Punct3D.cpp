#include "Punct3D.h"
#include <iostream>
#include <math.h>

Punct3D::Punct3D(double x, double y, double z) : Punct2D(x,y), z(z)  {}
Punct3D::Punct3D(const Punct3D& o): Punct2D(o) {
	this->z = o.z;
}
Punct3D::~Punct3D() {}
Punct3D& Punct3D::operator=(const Punct3D& p) {
	Punct2D::operator=(p);
	this->z = p.z;
	return *this;
}

double Punct3D::distanta(const Punct3D& p1, const Punct3D& p2) {
	return (sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2) + pow((p1.z - p2.z), 2)));
}

Punct3D Punct3D::operator+(const Punct3D& p) const {
	Punct2D::operator+(p);
	Punct3D temp;
	temp = this->z + p.z;
	return temp;
}
Punct3D Punct3D::operator-(const Punct3D& p) const {
	Punct2D::operator-(p);
	Punct3D temp;
	temp = this->z - p.z;
	return temp;
}
Punct3D Punct3D::operator*(const Punct3D& p) const {
	Punct2D::operator*(p);
	Punct3D temp;
	temp = this->z * p.z;
	return temp;
}
Punct3D Punct3D::operator/(const Punct3D& p) const {
	Punct2D::operator/(p);
	Punct3D temp;
	temp = this->z / p.z;
	return temp;
}
Punct3D& Punct3D::operator+=(const Punct3D& p) {
	Punct2D::operator+=(p);
	this->z += p.z;
	return *this;
}
Punct3D& Punct3D::operator-=(const Punct3D& p) {
	Punct2D::operator+=(p);
	this->z -= p.z;
	return *this;
}
Punct3D& Punct3D::operator*=(const Punct3D& p) {
	Punct2D::operator+=(p);
	this->z *= p.z;
	return *this;
}
Punct3D& Punct3D::operator/=(const Punct3D& p) {
	Punct2D::operator+=(p);
	this->z /= p.z;
	return *this;
}
bool Punct3D::operator<(const Punct3D& p) const {
	return ((sqrt(pow(this->z, 2) + pow(p.z, 2)) < Punct3D::operator<(p)));
}
bool Punct3D::operator<=(const Punct3D& p) const {
	return ((sqrt(pow(this->z, 2) + pow(p.z, 2)) <= Punct3D::operator<(p)));
}
bool Punct3D::operator>(const Punct3D& p) const {
	return ((sqrt(pow(this->z, 2) + pow(p.z, 2)) > Punct3D::operator<(p)));
}
bool Punct3D::operator>=(const Punct3D& p) const {
	return ((sqrt(pow(this->z, 2) + pow(p.z, 2)) >= Punct3D::operator<(p)));
}
bool Punct3D::operator==(const Punct3D& p) const {
	return ((sqrt(pow(this->z, 2) + pow(p.z, 2)) == Punct3D::operator<(p)));
}
bool Punct3D::operator!=(const Punct3D& p) const {
	return ((sqrt(pow(this->z, 2) + pow(p.z, 2)) != Punct3D::operator<(p)));
}
Punct3D& Punct3D::operator++() {
	Punct2D::operator++();
	this->z++;
	return *this;
}
Punct3D Punct3D::operator++(int dummy) {
	Punct2D::operator++(dummy);
	Punct3D init = *this;
	this->z++;
	return init;
}
Punct3D& Punct3D::operator--() {
	Punct2D::operator--();
	this->z--;
	return *this;
}
Punct3D Punct3D::operator--(int dummy) {
	Punct2D::operator--(dummy);
	Punct3D init = *this;
	this->z--;
	return init;
}
ostream& Punct3D::operator<<(ostream& os) const {
	os << "("<<this->x<<","<<this->y<<","<<this->z<<")";
	return os;
}
istream& Punct3D::operator>>(istream& is) {
	Punct2D::operator>>(is);
	cout << "z: ";
	is >> this->z;
	return is;
}
