#include "StivaStatica.h"
#include<iostream>

using namespace std;

Array_Stack::Array_Stack(int max)
    : max(max),top(0),vector(new int[max])
{}

Array_Stack::~Array_Stack()
{
    this->top=0;
    this->max=0;
    delete [] this->vector;
}

void Array_Stack::push(int info)
{
    // Verificare daca stiva este plina.
    if (this->isfull()) {
        throw Stack_Overflow();
    }

    // Inserarea unui element
    this->vector[this->top] = info;
    this->top++;
}

int Array_Stack::pop()
{
    //Verificare daca stiva este gol
    if (this->isempty())
    {
        throw Stack_Underflow();
    }

    this->top--;

    return this->vector[this->top];
}

int Array_Stack::peek()
{
    //Verificare daca stiva este gol
    if (this->isempty())
    {
        throw Stack_Underflow();
    }

    return this->vector[this->top-1];
}

bool Array_Stack::isfull()
{
    if(this->top>=this->max)
        return true;
    return false;
}

bool Array_Stack::isempty()
{
    if(this->top==0)
        return true;
    return false;
}

void Array_Stack::print()
{
    while(!this->isempty())
    {
        cout<<this->pop()<<endl;
    }
}
