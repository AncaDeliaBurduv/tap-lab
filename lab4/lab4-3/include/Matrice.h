#ifndef MATRICE_H
#define MATRICE_H
#include<iostream>
using namespace std;

class Matrice {

public :
	int n;
	int m;
	int** elemente;

	Matrice();
	Matrice(int n=0, int m=0);
	Matrice(const Matrice& obiect);
	~Matrice();


	int* operator[](int index) const;
	Matrice operator+(const Matrice& matrix);
//	friend Matrice operator+(const Matrice& mat1, const Matrice& mat2);
	Matrice operator-(const Matrice& matrix);
//	friend Matrice operator-(const Matrice& mat1, const Matrice& mat2);
	Matrice operator*(const Matrice& matrix);
//	friend Matrice operator*(const Matrice& mat1, const Matrice& mat2);
	Matrice operator/(const Matrice& matrix);
//	friend Matrice operator/(const Matrice& mat1, const Matrice& mat2);

	Matrice& operator=(const Matrice& matrix);
	Matrice& operator+=(const Matrice& matrix);
	Matrice& operator-=(const Matrice& matrix);
	Matrice& operator*=(const Matrice& matrix);
	Matrice& operator/=(const Matrice& matrix);

	bool operator==(const Matrice& matrix) const;
//	friend bool operator==(const Matrice& mat1, const Matrice& mat2);
	bool operator<(const Matrice& matrix) const;
//	friend bool operator<(const Matrice& mat1, const Matrice& mat2);
	bool operator<=(const Matrice& matrix) const;
//	friend bool operator<=(const Matrice& mat1, const Matrice& mat2);
	bool operator>(const Matrice& matrix) const;
//	friend bool operator>(const Matrice& mat1, const Matrice& mat2);
	bool operator>=(const Matrice& matrix) const;
//	friend bool operator>=(const Matrice& mat1, const Matrice& mat2);
	bool operator!=(const Matrice& matrix) const;
//	friend bool operator!=(const Matrice& mat1, const Matrice& mat2);

	Matrice& operator++();
	Matrice& operator--();
	Matrice operator++(int dummy);
	Matrice operator--(int dummy);

	ostream& operator<<(ostream& os) const;
//	friend ostream& operator<<(ostream& os, const Matrice& matrix);
	istream& operator>>(istream& is);
//	friend istream& operator>>(istream& is, const Matrice& matrix);
};

#endif // MATRICE_H
