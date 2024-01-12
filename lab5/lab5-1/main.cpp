#include <iostream>
#include "Angajat.h"
#include "Manager.h"

using namespace std;

int main()
{
	Angajat a;
	Manager m;
	a.operator>>(std::cin);
	a.operator<<(std::cout);
	cout<<"Salariu angajat: " << a.getSalar() << endl;
	m.operator>>(std::cin);
	cout<<"Salariu angajat: " << m.getSalar();
}
