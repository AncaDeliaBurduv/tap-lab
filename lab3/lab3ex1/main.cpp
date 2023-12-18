#include <iostream>
#include "Dreapta.h"
#include "Punct.h"
#include <math.h>
#include <fstream>

using namespace std;

float distanta(const Punct& p1, const Punct& p2){
    return sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
}

Punct centruDeGreutate(Punct** vp, int n){
    float sx=0, sy=0;
    for(int i=0;i<n;++i){
        sx+=vp[i]->getX();
        sy+=vp[i]->getY();
    }
    return Punct(sx/n,sy/n);
}

int main()
{
    ifstream fin("in1.txt");
    Dreapta d1(1,0);
    int n;

    cout<<"Cate puncte doriti?"<<endl;
    fin>>n;

    Punct** puncte=new Punct*[n];

    for(int i=0;i<n;++i){
        float x, y;
        fin>>x>>y;4
        puncte[i]=new Punct(x,y);
    }

    Punct g=centruDeGreutate(puncte,n);

    cout<<"{"<<g.getX()<<", "<<g.getY()<<")"<<endl;

    return 0;
}
