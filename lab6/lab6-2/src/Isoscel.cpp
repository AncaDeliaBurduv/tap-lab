#include "Isoscel.h"
#include <math.h>
#include <iostream>

using namespace std;

Isoscel::Isoscel(double a, double b, double c) : Triunghi(a,b,c) {}
Isoscel::Isoscel(const Isoscel& o) {
	this->a = o.a;
	this->b = o.b;
	this->c = o.c;
}
Isoscel::~Isoscel() {}

void Isoscel::arie() {
	double arie = (1 / 2) * (sqrt(pow(this->a, 2) - (pow(this->b, 2) / 4) * this->b));
	cout << "aria= " << arie << endl;
}
void Isoscel::perimetru() {
	double perimetru = 2 * (this->a + this->b);
	cout << "perimetru= " << perimetru << endl;
}
