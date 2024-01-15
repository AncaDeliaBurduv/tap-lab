#include <iostream>
#include <iterator>
#include <deque>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;


template<class T>
void afiscont (T el){cout<<el<<" "; }

int main() {
	deque<int> dq;
	vector<int> v;
	list<int> li;

    for(int i=1;i<=10;++i) if(i%3==0) dq.push_back(i); //3,6,9
    for(int i=1;i<=10;++i) if(i%2==0) v.push_back(i); //2,4,6,8,10
    for(int i=1;i<=10;++i) li.push_back(-1*i);

    //pt b
	deque<int> dq2(dq);
	vector<int> v2(v);

	//pt c
	deque<int> dq3(dq);
	vector<int> v3(v);
	list<int> li3(li);
	vector<int> rez;

    cout<<"deque: ";
    for_each(dq.begin(),dq.end(),afiscont<int>);
    cout<<endl;
    cout<<"vector: ";
    for_each(v.begin(),v.end(),afiscont<int>);
    cout<<endl;
    cout<<"lista: ";
    for_each(li.begin(),li.end(),afiscont<int>);
    cout<<endl;

    copy(v.begin(),v.end(),back_inserter(dq));
    cout<< "a)";
    for_each(dq.begin(),dq.end(),afiscont<int>);
    cout<<endl;

    copy(dq2.begin(),dq2.end(),back_inserter(v2));
    cout<< "b)";
    for_each(v2.begin(),v2.end(),afiscont<int>);
    cout<<endl;

    cout<<"c)";
    list<int>::iterator jumlistait=li3.begin();
    for(int cnt=0;cnt<li3.size()/2;++cnt){
        ++jumlistait;
    }
    copy(li3.begin(),jumlistait,inserter(v3,v3.end()-1));
    copy(jumlistait,li3.end(),inserter(dq3,dq3.end()-1));
    copy(v3.begin(),v3.end(),back_inserter(rez));
    copy(dq3.begin(),dq3.end(),back_inserter(rez));
    for_each(rez.begin(),rez.end(),afiscont<int>);
    cout<<endl;
}
