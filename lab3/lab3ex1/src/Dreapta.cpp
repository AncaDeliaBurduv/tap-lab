#include "Dreapta.h"

Dreapta::Dreapta(float m, float n):n(n)
{
    if(m==0) this->m=1;
    else this->m=m;
}

Dreapta::Dreapta(const Dreapta& other):m(other.m), n(other.n)
{}

Dreapta::~Dreapta()
{
    this->m=1;
    this->n=0;
}
