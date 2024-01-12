#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

class RandomNumber{
    int limsup, liminf;
    public:
        RandomNumber(int liminf, int limsup):liminf(liminf), limsup(limsup){}
        int operator()(){
            return (rand()%(limsup-liminf+1)+liminf);
        }
};

void myfunction(int i) {
	cout << i << "  ";
}
template <typename T>
void afisareVector(vector<T> v) {
	vector<string>::iterator it;
	for(auto it = v.begin(); it != v.end(); ++it){
        cout<< *it<<" ";
	}
}

template <typename T>
void afisareSet(set<T> s) {
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << *it << "  ";
	}
}

int main(void) {

	int n;
	cout << "n=";
	cin >> n;
	RandomNumber random(0, n/2);

	vector<int> v1(n);
	vector<int> v2(n);
	generate(v1.begin(), v1.end(), random);
	generate(v2.begin(), v2.end(), random);

	set<int> set1;
	set<int> set2;
	for (int i = 0; i < n; ++i) {
		set1.insert(v1[i]);
	}
	for (int i = 0; i < n; ++i) {
		set2.insert(v2[i]);
	}

	cout<<"vector 1: ";
	afisareVector(v1);
	cout<<endl;
	cout<<"set 1: ";
	afisareSet(set1);
	cout<<endl;
	cout<<"vector 2: ";
	afisareVector(v2);
	cout<<endl;
	cout<<"set 2: ";
	afisareSet(set2);
	cout<<endl;

	vector<int> intersectie(n);
	vector<int> diferenta(n);
	vector<int> reuniune(n + n);

	vector<int>::iterator it_i = set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), intersectie.begin());
	vector<int>::iterator it_d = set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), diferenta.begin());
	vector<int>::iterator it_r = set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), reuniune.begin());

	intersectie.resize(it_i - intersectie.begin());
	diferenta.resize(it_d - diferenta.begin());
	reuniune.resize(it_r - reuniune.begin());

	cout<<"intersectie: ";
	afisareVector(intersectie);
	cout<<endl;

	cout<<"diferenta: ";
	afisareVector(diferenta);
	cout<<endl;

	cout<<"reuniune: ";
	afisareVector(reuniune);
	cout<<endl;
}
