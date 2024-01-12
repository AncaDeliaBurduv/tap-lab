#include "Matrice.h"
#include <iostream>

using namespace std;

Matrice::Matrice(int n, int m) :n(n), m(m) {
	this->elemente = new int* [n];
	for (int i = 0; i < n; ++i) {
		this->elemente[i] = new int[m];
	}
}
Matrice::Matrice(const Matrice& o) {
	this->n = o.n;
	this->m = o.m;
	for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            this->elemente[i][j] = o.elemente[i][j];
        }
	}
}
Matrice::~Matrice() {
	this->n = NULL;
	this->m = NULL;
	for (int i = 0; i < this->n; ++i) {
		delete[] this->elemente[i];
	}
	delete[] elemente;
}
int* Matrice::operator[](int index) const {
	return elemente[index];
}
Matrice Matrice::operator+(const Matrice& mat) {
	Matrice rez(this->n, this->m);
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = mat.elemente[i][j];
			rez.elemente[i][j] = a + b;
		}
	}
	return rez;
}
Matrice Matrice::operator-(const Matrice& mat) {
	Matrice rez(this->n, this->m);
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = mat.elemente[i][j];
			rez.elemente[i][j] = a - b;
		}
	}
	return rez;
}
Matrice Matrice::operator*(const Matrice& mat) {
	Matrice rez(this->n, this->m);

	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < mat.m; j++) {
			rez.elemente[i][j] = 0;
			for (int k = 0; k < this->m; ++k) {
				rez.elemente[i][j] += this->elemente[i][k] * mat.elemente[k][j];
			}
		}
	}
	return rez;
}
Matrice Matrice::operator/(const Matrice& mat) {
	Matrice rez(this->n, this->m);
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = mat.elemente[i][j];
			rez.elemente[i][j] = a / b;
		}
	}
	return rez;
}
Matrice& Matrice::operator=(const Matrice& mat) {
	this->n = mat.n;
	this->m = mat.m;
	for (int i = 0; i < mat.n; i++) {
		for (int j = 0; j < mat.m; j++) {
			this->elemente[i][j] = mat.elemente[i][j];
		}
	}
	return *this;
}
Matrice& Matrice::operator+=(const Matrice& mat) {
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = mat.elemente[i][j];
			this->elemente[i][j] = a + b;
		}
	return *this;
}
Matrice& Matrice::operator-=(const Matrice& mat) {
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = mat.elemente[i][j];
			this->elemente[i][j] = a - b;
		}
	return *this;
}
Matrice& Matrice::operator*=(const Matrice& mat) {
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = mat.elemente[i][j];
			this->elemente[i][j] = a * b;
		}
	return *this;
}
Matrice& Matrice::operator/=(const Matrice& mat) {
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = mat.elemente[i][j];
			this->elemente[i][j] = a / b;
		}
	return *this;
}
bool Matrice::operator==(const Matrice& mat) const {
	if (this->m * this->n == mat.m * mat.n) {
		for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int a = this->elemente[i][j];
                int b = mat.elemente[i][j];
                if(a!=b) return false;
            }
		}
		return true;
	}

	else {
		return false;
	}
}
bool Matrice::operator<(const Matrice& mat) const {
	return(this->m * this->n < mat.m * mat.n);
}
bool Matrice::operator<=(const Matrice& mat) const {
	return (this->m * this->n <= mat.m * mat.n);
}
bool Matrice::operator>(const Matrice& mat) const {
	return (this->m * this->n > mat.m * mat.n);
}
bool Matrice::operator>=(const Matrice& mat) const {
	return (this->m * this->n >= mat.m * mat.n);
}
bool Matrice::operator!=(const Matrice& mat) const {
	return (this->m * this->n != mat.m * mat.n);
}
Matrice& Matrice::operator++() {
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; ++j) {
			if (i == j) {
				this->elemente[i][j] += 1;
			}
		}
	}
	return *this;
}
Matrice& Matrice::operator--() {
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; ++j) {
			if (i == j) {
				this->elemente[i][j] -= 1;
			}
		}
	}
	return *this;
}
Matrice Matrice::operator--(int dummy) {
	Matrice temp = *this;
	-- *this;
	return temp;
}

Matrice Matrice::operator++(int dummy) {
	Matrice temp = *this;
	++ *this;
	return temp;
}
ostream& Matrice::operator<<(ostream& os) const {
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; ++j) {
			os << this->elemente[i][j] << " ";
		}
		os << endl;
	}
	os << endl;
	return os;
}
istream& Matrice::operator>>(istream& is) {
	cout << "Introduceti elementele matricei: " << endl;
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; ++j) {
			is >> this->elemente[i][j];
		}
	}
	return is;
}
