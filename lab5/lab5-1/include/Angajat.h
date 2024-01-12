#ifndef Angajat_h
#define Angajat_h
#include <iostream>
using namespace std;


class Angajat {
private :
	double tarifOrar=5.5;
	int nrOre;

public :
	Angajat(double tarifOrar = 5.5, int nrOre=0);
	Angajat(const Angajat&);
	~Angajat();
	Angajat& operator=(const Angajat&);
	inline double getSalar() {return (this->tarifOrar * this->nrOre);}
	inline double getTarifOrar() const {return this->tarifOrar;}
	inline int getNrOre() const {
		return this->nrOre;
	}
	ostream& operator<<(ostream&) const;
	istream& operator>>(istream&);
};

#endif // ANGAJAT_H
