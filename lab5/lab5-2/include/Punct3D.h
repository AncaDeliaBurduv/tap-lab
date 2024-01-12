#ifndef PUNCT3D_H
#define PUNCT3D_H

#include <Punct2D.h>

class Punct3D : public Punct2D {
	private :
		double z;

	public:
		Punct3D(double x=0, double y=0, double z = 0);
		Punct3D(const Punct3D&);
		~Punct3D();
		Punct3D& operator=(const Punct3D&);
		static double distanta(const Punct3D&, const Punct3D&);

		Punct3D operator+(const Punct3D&) const;
		Punct3D operator-(const Punct3D&) const;
		Punct3D operator*(const Punct3D&) const;
		Punct3D operator/(const Punct3D&) const;

		bool operator<(const Punct3D&) const;
		bool operator<=(const Punct3D&) const;
		bool operator>(const Punct3D&) const;
		bool operator>=(const Punct3D&) const;
		bool operator==(const Punct3D&) const;
		bool operator!=(const Punct3D&) const;

		Punct3D& operator+=(const Punct3D&);
		Punct3D& operator-=(const Punct3D&);
		Punct3D& operator*=(const Punct3D&);
		Punct3D& operator/=(const Punct3D&);

		Punct3D& operator++();
		Punct3D operator++(int dummy);
		Punct3D& operator--();
		Punct3D operator--(int dummy);

		ostream& operator<<(ostream& os) const;
		istream& operator>>(istream& is);
};

#endif // PUNCT3D_H
