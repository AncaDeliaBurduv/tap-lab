#ifndef PUNCT2D_H
#define PUNCT2D_H
#include <iostream>

using namespace std;

class Punct2D {
protected :
	double x;
	double y;

public:
	Punct2D(double x=0, double y=0);
	Punct2D(const Punct2D&);
	~Punct2D();
	Punct2D& operator=(const Punct2D&);

	static double distanta(const Punct2D& p1, const Punct2D& p2);

	Punct2D operator+(const Punct2D&) const;
	Punct2D operator-(const Punct2D&) const;
	Punct2D operator*(const Punct2D&) const;
	Punct2D operator/(const Punct2D&) const;

	bool operator<(const Punct2D&) const;
	bool operator<=(const Punct2D&) const;
	bool operator>(const Punct2D&) const;
	bool operator>=(const Punct2D&) const;
	bool operator==(const Punct2D&) const;
	bool operator!=(const Punct2D&) const;

	Punct2D& operator+=(const Punct2D&);
	Punct2D& operator-=(const Punct2D&);
	Punct2D& operator*=(const Punct2D&);
	Punct2D& operator/=(const Punct2D&);

	Punct2D& operator++();
	Punct2D operator++(int dummy);
	Punct2D& operator--();
	Punct2D operator--(int dummy);

	ostream& operator<<(ostream&) const;
	istream& operator>>(istream&);
};

#endif // PUNCT2D_H
