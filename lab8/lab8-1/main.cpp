#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main()
{
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    set<string> strset;
    set<string>::iterator setit;
    string s;

    while(fin>>s)
    {
        strset.insert(s);
    }

    for(setit=strset.begin();setit!=strset.end();++setit)
    {
        fout<<*setit<<" ";
    }

    return 0;
}
