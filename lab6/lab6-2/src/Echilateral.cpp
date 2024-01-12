#include "Echilateral.h"
#include <math.h>
#include <iostream>

using namespace std;

Echilateral::Echilateral(double a) : Isoscel(a, a, a) {}
Echilateral::Echilateral(const Echilateral& o) {}
Echilateral::~Echilateral() {
}
void Echilateral::arie() {
	double aria = (a*sqrt(3))/4;
	cout << "aria= " << aria << endl;
}
void Echilateral::perimetru() {
	double perimetru = 3 * a;
}
