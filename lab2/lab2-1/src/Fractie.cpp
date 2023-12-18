#include "Fractie.h"
#include "Eroare.h"
#include <iostream>

Fractie::Fractie(int numarator,int numitor):numarator(numarator)
{
    if(numitor==0){
        this->numitor=1;
        cout<<"Numitorul nu poate fi 0. Numitor initializat cu 1."<<endl;
    }
    else
        this->numitor=numitor;
}

Fractie::~Fractie()
{
    this->numarator=0;
    this->numitor=1;
}

Fractie::Fractie(const Fractie& other):
    numarator(other.numarator),numitor(other.numitor)
{}

int Fractie::cmmdc(int n, int m)
{
    if(n<0) n=0-n;
    if(m<0) m=0-m;
    while(n != m)
        if(n > m)
            n -= m;
        else
            m -= n;
    return n;
}

Fractie Fractie::adunare(const Fractie& f1,const Fractie& f2)
{
    if(f1.numitor==f2.numitor){
        return Fractie(f1.numarator+f2.numarator,
                       f1.numitor);
    }
    int numarator = f1.numarator*f2.numitor+f2.numarator*f1.numitor;
    return Fractie(numarator,
                   f1.numitor*f2.numitor).simplifica();
}

Fractie Fractie::inmultire(const Fractie& f1,const Fractie& f2)
{
    return Fractie(f1.numarator*f2.numarator,
                   f1.numitor*f2.numitor).simplifica();
}

Fractie Fractie::scadere(const Fractie& f1,const Fractie& f2){
    Fractie tmp(f2);
    tmp.numarator=0-f2.numarator;
    return adunare(f1, tmp);
}

Fractie Fractie::impartire(const Fractie& f1,const Fractie& f2){
    Fractie tmp(f2);
    return inmultire(f1,tmp.reciproc());
}

Fractie Fractie::reciproc()
{
    if(!this->numarator)
        throw Eroare("Fractia cu numarator 0 nu are reciproc");
    return Fractie(this->numitor,this->numarator);
}

Fractie Fractie::simplifica()
{
    int nr = this->numarator;
    int num = this->Getnumitor();
    int div =cmmdc(nr,num);
    return Fractie(nr/div,num/div);
}

bool Fractie::egal(const Fractie& f)
{
    Fractie tmp1=this->simplifica();
    Fractie tmp2(f);
    tmp2=tmp2.simplifica();
    return (tmp1.numarator==tmp2.numarator &&
            tmp1.numitor==tmp2.numitor);
}

void Fractie::print()
{
    cout<<this->numarator<<'/'<<this->numitor;
}
