#include "LSI.h"
#include <iostream>

using namespace std;

LSI::LSI(Nod* n):top(n)
{}

LSI::~LSI()
{}

LSI::LSI(const LSI& other)
{
    this->top=other.top;
}

void LSI::inserareInceput(int infoNou) {
	Nod* nouNod = new Nod(infoNou);
		if (this->top == nullptr) {
			nouNod->succ = nullptr;
			nouNod->info = infoNou;
			this->top = nouNod;
		}
		else {
			nouNod->succ = top;
			nouNod->info = infoNou;
			this->top = nouNod;
		}
}
void LSI::inserareSfarsit(int infoNou) {
	Nod* nouNod = new Nod(infoNou);
	if (this->top == nullptr) {
		nouNod->succ = nullptr;
		nouNod->info = infoNou;
		this->top = nouNod;
	}
	else {
		Nod* tmp = this->top;
		while (tmp->succ != nullptr) {
			tmp = tmp->succ;
		}
		Nod* last = tmp;
		last->succ = nouNod;
		nouNod->succ = nullptr;
		nouNod->info = infoNou;
	}
}
void LSI::traversare() {
	Nod* tmp = top;
	while (tmp != nullptr) {
		cout << tmp->info << " ";
		tmp = tmp->succ;
	}
	cout << endl;
}
void LSI::inserareInterior(int infoNou) {
	Nod* nouNod = new Nod(infoNou);

	if (this->top == nullptr) {
		nouNod->succ = nullptr;
		nouNod->info = infoNou;
		this->top = nouNod;
	}
	else {
		Nod* dupa = top;
		nouNod->succ = dupa->succ;
		dupa->succ = nouNod;
		nouNod->info = infoNou;
	}
}
void LSI::stergereInceput() {
	if (this->top == nullptr) {
		cout << "Lista vida" << endl;
	}
	else {
		Nod* salvat;
		salvat = this->top;
		this->top = top->succ;
		delete salvat;
	}
}
void LSI::stergereSfarsit() {
	if (this->top == nullptr) {
		cout << "Eroare, lista este vida" << endl;
	}
	else {
		Nod* tmp = this->top;
		while (tmp->succ->succ != nullptr) {
			tmp = tmp->succ;
		}
		Nod* penultim = tmp;
		Nod* salvat = penultim->succ;
		penultim->succ = nullptr;
		delete salvat;
	}
}
void LSI::stergereInterior() {
	Nod* dupa = this->top;
	if (this->top == nullptr) {
		cout << "Eroare - lista vida" << endl;
	}
	else {
		Nod* salvat = dupa->succ;
		dupa->succ = salvat->succ;
		delete salvat;
	}
}
void LSI::init() {
	while (this->top == nullptr) {
		stergereSfarsit();
	}
}
Nod* LSI::cautare(int infoCautat) {
	Nod* tmp = this->top;
	while (tmp != nullptr) {
		if (tmp->info == infoCautat) {
			Nod* adresa = tmp;
			return tmp;
		}
		else {
			tmp = tmp->succ;
		}
	}
	return nullptr;
}
void LSI::actualizare(int infoCautat, int infoNou) {
	Nod* adresa = cautare(infoCautat);
	if (adresa == nullptr) {
		cout << "Eroare - informatie inexistenta" << endl;
	}
	else {
		adresa->info = infoNou;
	}
}
