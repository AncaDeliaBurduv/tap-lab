#include "Eroare.h"
#include <iostream>

Eroare::Eroare(string msg):msg(msg)
{}
void Eroare::errprint(){
    cout<<this->msg;
}
