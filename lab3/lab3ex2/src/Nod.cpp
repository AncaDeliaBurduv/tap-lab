#include "Nod.h"

Nod::Nod(int info, Nod* n):info(info), succ(n)
{}

Nod::~Nod()
{
    delete succ;
}

Nod::Nod(const Nod& other):info(other.info), succ(other.succ)
{}
