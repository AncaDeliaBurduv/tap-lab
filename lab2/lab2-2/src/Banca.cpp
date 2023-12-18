#include "Banca.h"

Banca::Banca()
{
    //ctor
}

Banca::~Banca()
{
    //dtor
}

Banca::Banca(const Banca& other)
{
    //copy ctor
}

Banca& Banca::operator=(const Banca& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
