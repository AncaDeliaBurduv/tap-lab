#include <iostream>
#include<algorithm>
#include<fstream>
#include<list>

using namespace std;

int n, m;
class ModOrder {
    public:
        bool operator()(int nr1, int nr2) {
            int mod1=nr1%m, mod2=nr2%m;
            if(mod1==mod2)
            {
                if(nr1%2 != nr2%2)
                {
                    return nr1%2==1;
                }
                else if(nr1%2 && nr2%2)
                {
                    return nr1>nr2;
                }
                else if((!nr1%2) && (!nr2%2))
                {
                    return nr1<nr2;
                }
            }
            else
            {
                return mod1<mod2;
            }
        }
};

int main()
{
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    list<int> li;
    list<int>::iterator it;
    fin>>n>>m;
    fout<<n<<' '<<m<<endl;
    for(int i=0;i<n;++i)
    {
        int nr;
        fin>>nr;
        li.push_back(nr);
    }
    li.sort(ModOrder());
	for (it = li.begin(); it != li.end(); ++it)
		fout << *it << endl;
    fout<<"0 0";
    return 0;
}
