#include<iostream>
#include<list>
#include<string>
#include<fstream>

using namespace std;

class Lungime {
    public:
        bool operator()(string s1, string s2) {
            return (s1.size() < s2.size());
        }
};
class Invers {
    public:
        bool operator()(string s1, string s2) {
            return (s1.compare(s2)>0);
        }
};
int main() {

	list<string> strlist;
	list<string>::iterator it;

	ifstream fin("in.txt");
	ofstream fout1("out1.txt");
	ofstream fout2("out2.txt");
	ofstream fout3("out3.txt");

	while (!fin.eof()) {
        string linie;
		getline(fin, linie);
		strlist.push_back(linie);
	}
	strlist.sort();
	for (it = strlist.begin(); it != strlist.end(); ++it)
		fout1 << *it << endl;
	strlist.sort(Invers());
	for (it = strlist.begin(); it != strlist.end(); ++it)
		fout2 << *it << endl;

	strlist.sort(Lungime());
	for (it = strlist.begin(); it != strlist.end(); ++it)
		fout3 << *it << endl;

	return 0;
}
