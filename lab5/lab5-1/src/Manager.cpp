#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(double tarifOrar, int nrOre, int nrSubord) : Angajat(tarifOrar,nrOre) , nrSubord(nrSubord) {}

Manager::~Manager()
{}

Manager::Manager(const Manager& other) : Angajat(other)
{
	this->nrSubord = other.nrSubord;
}

Manager& Manager::operator=(const Manager& rhs)
{
	Angajat::operator=(rhs);
	this->nrSubord = rhs.nrSubord;
	return *this;
}
ostream& Manager::operator<<(ostream& o) const {
	Angajat::operator<<(cout);
	o << "Nr subordonati: " << this->nrSubord << endl;
	return o;
}
istream& Manager::operator>>(istream& i) {
	Angajat::operator>>(cin);
	cout << "Nr subordonati: ";
	i >> nrSubord;
	return i;
}

double Manager::getSalar() const {
    return ((this->getTarifOrar() * this->getNrOre()) + ((this->getTarifOrar() * this->getNrOre())/ 2));
}
