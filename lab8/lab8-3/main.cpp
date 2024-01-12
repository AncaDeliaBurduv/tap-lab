#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    map<unsigned, map<string,unsigned>> lmap;
    map<unsigned, map<string,unsigned>>::iterator mit;
    pair<map<string,unsigned>::iterator,bool> ret;
    string linie;
    unsigned nr_lin=1;

    while(getline(fin,linie))
    {
        map<string,unsigned> mMic;
        int poz_sp;
        while ((poz_sp = linie.find(" ")) != string::npos) {
            string str = linie.substr(0, poz_sp);
            linie.erase(0, poz_sp + 1);
            ret=mMic.insert(pair<string,unsigned>(str,1));
            if(!ret.second)
            {
                ++mMic[str];
            }
        }
        ret=mMic.insert(pair<string,unsigned>(linie,1));
        if(!ret.second)
        {
            ++mMic[linie];
        }
        lmap.insert(pair<unsigned, map<string,unsigned>>(nr_lin, mMic));
        ++nr_lin;
    }

    for(mit=lmap.begin();mit!=lmap.end();++mit)
    {
        fout<<"linia "<<mit->first<<": "<<endl;
        map<string,unsigned>::iterator mitMic;
        for(mitMic=(mit->second).begin();mitMic!=(mit->second).end();++mitMic)
        {
            fout<<mit->first<<" "<<mitMic->first<<" "<<mitMic->second<<endl;
        }
    }

    return 0;
}
