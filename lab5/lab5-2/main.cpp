#include <iostream>
#include "Punct2D.h"
#include "Punct3D.h"

using namespace std;

int main()
{
	int n,m;
	cout << "nr puncte 2D : ";
	cin >> n;

	Punct2D** puncte2D = new Punct2D * [n];
	for (int i = 0; i < n; ++i) {
		puncte2D[i] = new Punct2D();
		puncte2D[i]->operator>>(std::cin);
	}

	for (int i = 0; i < n; ++i) {
		puncte2D[i]->operator<<(std::cout);
	}


	cout << "nr puncte 3D : ";
	cin >> m;

	Punct3D** puncte3D = new Punct3D * [m];
	for (int j = 0; j < m; ++j) {
		puncte3D[j] = new Punct3D();
		puncte3D[j]->operator>>(std::cin);
	}
	for (int j = 0; j < m; ++j) {
		puncte3D[j]->operator<<(std::cout);
	}
	cout <<  "distanta= " << Punct3D::distanta(*puncte3D[0], *puncte3D[1]);
    return 0;
}
