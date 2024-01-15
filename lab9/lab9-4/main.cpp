#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<fstream>
#include<map>
#include<set>

using namespace std;

int main() {
	map<string, set<string>> perm;
	map<string, set<string>>::iterator it;

	string s;
	ifstream fin("in.txt");
	while (!fin.eof()) {
		fin >> s;
		string tmp = s;
		sort(s.begin(), s.end());

		set<string> setstr;
		for (int i = 0; i <= s.size(); i++)
		{
			next_permutation(s.begin(), s.end());
			setstr.insert(s);
		}

		perm.insert(pair<string, set<string>>(tmp, setstr));
	}
	set<string>::iterator it_mic;
	for (it = perm.begin(); it != perm.end(); ++it)
	{
		cout << (*it).first << " : ";
		for (it_mic = (*it).second.begin(); it_mic != (*it).second.end(); ++it_mic)
		{
			cout << (*it_mic) << " ";
		}
		cout << endl;
	}
	fin.close();
}
