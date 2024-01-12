#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    map<string,unsigned> strmap;
    map<string,unsigned>::iterator mit;
    pair<map<string,unsigned>::iterator,bool> ret;
    string s;

    while(fin>>s)
    {
        ret=strmap.insert(pair<string,unsigned>(s,1));
        if(!ret.second)
        {
            ++strmap[s];
        }
    }

    for(mit=strmap.begin();mit!=strmap.end();++mit)
    {
        fout<<mit->first<<" "<<mit->second<<endl;
    }

    return 0;
}
