#include "Fractie.h"
#include <iostream>
using namespace std;

Fractie::Fractie(int numarator,int numitor):numarator(numarator)
{
    if(numitor==0){
        this->numitor=1;
        cout<<"Numitorul nu poate fi 0. Numitor initializat cu 1."<<endl;
    }
    else
        this->numitor=numitor;
}

Fractie::~Fractie()
{
    this->numarator=0;
    this->numitor=1;
}

Fractie::Fractie(const Fractie& other):
    numarator(other.numarator),numitor(other.numitor)
{}

Fractie& Fractie::operator=(const Fractie& o) {
	this->numarator = o.numarator;
	this->numitor = o.numitor;
	return *this;
}

int Fractie::cmmdc(int n, int m)
{
    if(n<0) n=0-n;
    if(m<0) m=0-m;
    while(n != m)
        if(n > m)
            n -= m;
        else
            m -= n;
    return n;
}

Fractie Fractie::reciproc()
{
    if(!this->numarator)
        {
            cout<<"Fractia cu numarator 0 nu are reciproc";
            return Fractie();
        }
    return Fractie(this->numitor,this->numarator);
}

Fractie Fractie::simplifica()
{
    int nr = this->numarator;
    int num = this->Getnumitor();
    int div =cmmdc(nr,num);
    return Fractie(nr/div,num/div);
}

Fractie Fractie::operator+(const Fractie& f) const {
	Fractie rez;
	if (this->numitor == f.numitor) {
		rez.numarator = this->numarator + f.numarator;
	}
	else {
		rez.numarator = (this->numarator * f.numitor) + (this->numitor * f.numarator);
		rez.numitor = this->numitor * f.numitor;
	}
	return rez;
}
//Fractie operator+(const Fractie& f1, const Fractie& f2) {
//	if (this->numitor == f1.numitor) {
//		rez.numarator = this->numarator + f1.numarator;
//	}
//	else {
//		rez.numarator = (this->numarator * f1.numitor) + (this->numitor * f1.numarator);
//		rez.numitor = this->numitor * f1.numitor;
//	}
//	return rez;
//}
Fractie Fractie::operator-(const Fractie& f) const {
	Fractie rez;
	if (this->numitor == f.numitor) {
		rez.numarator = this->numarator - f.numarator;
	}
	else {
		rez.numarator = (this->numarator * f.numitor) - (this->numitor * f.numarator);
		rez.numitor = this->numitor * f.numitor;
	}
	return rez;
}
//Fractie operator-(const Fractie& f1, const Fractie& f2) {
//	Fractie rez;
//	if (this->numitor == f1.numitor) {
//		rez.numarator = this->numarator - f1.numarator;
//	}
//	else {
//		rez.numarator = (this->numarator * f1.numitor) - (this->numitor * f1.numarator);
//		rez.numitor = this->numitor * f1.numitor;
//	}
//	return rez;
//}
Fractie Fractie::operator*(const Fractie& f) const {
	Fractie rez;
	rez.numarator = this->numarator * f.numarator;
	rez.numitor = this->numitor * f.numitor;
	return rez;
}
//Fractie operator*(const Fractie& f1, const Fractie& f2) {
//	Fractie rez;
//	rez.numarator = this->numarator * f1.numarator;
//	rez.numitor = this->numitor * f1.numitor;
//	return rez;
//}
Fractie Fractie::operator/(const Fractie& f) const {
	Fractie tmp = f;
	int num = tmp.numitor;
	tmp.numitor = tmp.numarator;
	tmp.numarator = num;
	Fractie rez;
	rez.numarator = this->numarator * tmp.numarator;
	rez.numitor = this->numitor * tmp.numitor;
	return rez;
}
//Fractie operator/(const Fractie& f1, const Fractie& f2) {
//	Fractie tmp = f1;
//	int num = tmp.numitor;
//	tmp.numitor = tmp.numarator;
//	tmp.numarator = num;
//	Fractie rez;
//	rez.numarator = this->numarator * tmp.numarator;
//	rez.numitor = this->numitor * tmp.numitor;
//	return rez;
//}

bool Fractie::operator<(const Fractie& f) const {
	return (this->numarator / this->numitor < f.numarator / f.numitor);
}
//bool operator<(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor < f2.numarator / f2.numitor);
//}
bool Fractie::operator>(const Fractie& f) const {
	return (this->numarator / this->numitor > f.numarator / f.numitor);
}
//bool operator>(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor > f2.numarator / f2.numitor);
//}
bool Fractie::operator<=(const Fractie& f) const {
	return (this->numarator / this->numitor <= f.numarator / f.numitor);
}
//bool operator<=(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor <= f2.numarator / f2.numitor);
//}
bool Fractie::operator>=(const Fractie& f) const {
	return (this->numarator / this->numitor >= f.numarator / f.numitor);
}
//bool operator>=(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor >= f2.numarator / f2.numitor);
//}
bool Fractie::operator!=(const Fractie& f) const {
	return !(this->numarator / this->numitor != f.numarator / f.numitor);
}
//bool operator!=(const Fractie& f1, const Fractie& f2) {
//	return !(f1.numarator / f1.numitor != f2.numarator / f2.numitor);
//}
bool Fractie::operator==(const Fractie& f) const {
	return (this->numarator / this->numitor == f.numarator / f.numitor);
}
//bool operator==(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor == f2.numarator / f2.numitor);
//}
Fractie& Fractie::operator+=(const Fractie& f) {

	if (this->numitor == f.numitor) {
		this->numarator = this->numarator + f.numarator;
	}
	else {
		this->numarator = (this->numarator * f.numitor) + (this->numitor * f.numarator);
		this->numitor = this->numitor * f.numitor;
	}
	return *this;
}
Fractie& Fractie::operator-=(const Fractie& f) {
	if (this->numitor == f.numitor) {
		this->numarator = this->numarator - f.numarator;
	}
	else {
		this->numarator = (this->numarator * f.numitor) - (this->numitor * f.numarator);
		this->numitor = this->numitor * f.numitor;
	}
	return *this;
}
Fractie& Fractie::operator*=(const Fractie& f) {
	this->numarator = this->numarator * f.numarator;
	this->numitor = this->numitor * f.numitor;
	return *this;
}
Fractie& Fractie::operator/=(const Fractie& f) {
	Fractie tmp = f;
	int num = tmp.numitor;
	tmp.numitor = tmp.numarator;
	tmp.numarator = num;

	this->numarator = this->numarator * tmp.numarator;
	this->numitor = this->numitor * tmp.numitor;
	return *this;
}

Fractie& Fractie::operator++() {
	this->numarator += this->numitor;
	return *this;
}
Fractie  Fractie::operator++(int dummy) {
	Fractie old = *this;
	this->numarator += this->numitor;
	return old;
}
Fractie& Fractie::operator--() {
	this->numarator -= this->numitor;
	return *this;
}
Fractie  Fractie::operator--(int dummy) {
	Fractie old = *this;
	this->numarator -= this->numitor;
	return old;
}

ostream& Fractie::operator<<(ostream& o) const {
	o << this->numarator << " / " << this->numitor << endl;
	return o;
}
//ostream& operator<<(ostream& o, const Fractie& f) {
//	o << f.getNumarator() << " / " << f.getNumitor();
//}
istream& Fractie::operator>>(istream& i) {
	i >> this->numarator>>this->numitor;
	return i;
}
//istream& operator>>(istream& i, const Fractie& f) {
//	i >> f.getNumarator()>>f.getNumitor();
//}
Fractie::operator double() {
	return (double)this->numarator / this->numitor;
}
