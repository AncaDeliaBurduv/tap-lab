#include "carte.h"
#include <iostream>

using namespace std;

Carte::Carte(string autor, string titlu, unsigned int isbn, unsigned int pret) : autor(autor), titlu(titlu), isbn(isbn), pret(pret) {
	instance++;
}
Carte::Carte(const Carte& other) {
	this->autor = other.autor;
	this->titlu = other.titlu;
	this->isbn = other.isbn;
	this->pret = other.pret;
	if (this != &other) {
		instance++;
	}
}
Carte::~Carte() {
	this->autor = "";
	this->titlu = "";
	this->isbn = 0;
	this->pret = 0;
	instance--;
}
void Carte::print() {
	cout << endl << "Titlu : " << this->titlu << endl;
	cout << endl << "Autor : " << this->autor << endl;
	cout << endl << "ISBN : " << this->isbn << endl;
	cout << endl << "Pret : " << this->pret << endl;

}
