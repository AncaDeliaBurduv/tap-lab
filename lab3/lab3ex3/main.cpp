#include "carte.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

unsigned int Carte:: instance = 0;

int main(void) {

	ifstream fin("in.txt");
	unsigned int n;
	Carte** carti = new Carte * [n];
	cout << "Introduceti numarul de carti : ";
	cin >> n;
	string s;
	cout << "Introduceti autorul cartii : ";
	cin >> s;

	for (int i = 0; i < n; i++) {
		string autor;
		string titlu;
		unsigned int isbn;
		unsigned int pret;
		fin >> autor;
		fin >> titlu;
		fin >> isbn;
		fin >> pret;
		carti[i] = new Carte(autor, titlu, isbn, pret);
		if (s.compare(autor) == 0) {
			carti[i]->print();
		}
	}
	cout << endl << "Numarul de carti creeate este : " << Carte::getInstance() << endl;
	for (int i = 0; i < n; i++) {
		delete carti[i];
	}
	delete[] carti;



}
