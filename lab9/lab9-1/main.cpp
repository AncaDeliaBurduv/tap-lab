#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main() {

	unsigned int i = 0;
	unsigned int max_length = 0;

	string line;
	string separator_lin;
	vector<string> v;

	ifstream fin("in.txt");
	while (!fin.eof()) {
		getline(fin, line);
		if (max_length < line.size())
		{
			max_length = line.size();
		}
		++i;
		v.push_back(line);
	}

	for (unsigned j = 0; j <= max_length; ++j) {
		separator_lin.append("_");
	}
	v.insert(v.begin(), separator_lin);
	for (i = 2; i < v.size() - 1; i += 2) {
		v.insert(v.begin() + i, separator_lin);
	}
	v.push_back(separator_lin);

	for (i = 1; i < v.size(); i++)
	{
		v[i].insert(0, "|");

		unsigned int poz = v[i].size();
		for (unsigned int j = v[i].size() - 1; j <= max_length; ++j)
		{
			v[i].insert(poz, " ");
			++poz;
		}
		v[i].insert(poz, "|");
	}

    v[0].append("_");
	for (i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cin.ignore();
	return 0;
}
