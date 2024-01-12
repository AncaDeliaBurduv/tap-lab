#include "Angajat.h"
#include <iostream>

using namespace std;

Angajat::Angajat(double tarifOrar, int nrOre) : tarifOrar(tarifOrar), nrOre(nrOre) {}
Angajat::Angajat(const Angajat& o) {
	this->nrOre = o.nrOre;
	this->tarifOrar = o.tarifOrar;
}
Angajat::~Angajat() {}
Angajat& Angajat::operator=(const Angajat& o) {
	this->nrOre = o.nrOre;
	this->tarifOrar = o.tarifOrar;
	return *this;
}
ostream& Angajat::operator<<(ostream& o) const {
	o << "Tarif orar: " << this->tarifOrar << endl << "Nr ore: " << this->nrOre << endl;
	return o;
}
istream& Angajat::operator>>(istream& i) {
	cout << "Tarif orar: ";
	i >> this->tarifOrar;
	cout << "Nr ore: ";
	i >> this->nrOre;
	return i;
}
