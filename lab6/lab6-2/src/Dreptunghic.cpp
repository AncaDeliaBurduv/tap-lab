#include "Dreptunghic.h"
#include <math.h>
#include <iostream>

using namespace std;

Dreptunghic::Dreptunghic(double ci, double c2, double i) : Triunghi(a,b,c) {}
Dreptunghic::Dreptunghic(const Dreptunghic& o) {
	this->a = o.a;
	this->b = o.b;
	this->c = o.c;
}
Dreptunghic::~Dreptunghic() {}

void Dreptunghic::arie() {
	cout << "aria= " << (a*b)/2 << endl;
}
void Dreptunghic::perimetru() {
	cout << "perimetru= " << (a + b + c) << endl;
}
