#include "Punct.h"

int Punct::cntDr=0;
int Punct::cntSemiNeg=0;
int Punct::cntSemiPoz=0;
Dreapta Punct::d(1,0);

Punct::Punct(float x, float y):x(x),y(y)
{
    float tmp = d.getM()*x+d.getN()-y;
    if(!tmp){
        ++cntDr;
    }
    else if(tmp>0){
        ++cntSemiPoz;
    }
    else{
        ++cntSemiNeg;
    }
}

Punct::~Punct()
{
    float tmp = d.getM()*this->x+d.getN()-this->y;
    if(!tmp){
        --cntDr;
    }
    else if(tmp>0){
        --cntSemiPoz;
    }
    else{
        --cntSemiNeg;
    }

    this->x=0;
    this->y=0;
}

Punct::Punct(const Punct& other):x(other.x),y(other.y)
{}
