#include "coadastatica.h"
#include<iostream>

using namespace std;

Array_Queue::Array_Queue(int max)
    : max(max),front(0),end(0),vector(new int[max])
{}

Array_Queue::~Array_Queue()
{
    this->front=0;
    this->end=0;
    this->max=0;
    delete [] this->vector;
}

void Array_Queue::enqueue(int info)
{
    // Verificare daca vectorul este plin.
    if (isfull()) {
        throw Queue_Overflow();
    }

    // Inserarea unui element
    this->vector[this->end] = info;
    this->end++;

}

int Array_Queue::dequeue()
{
    int nr;

    //Verificare daca vectorul este gol
    if (this->isempty())
    {
        throw Queue_Underflow();
    }

    nr = this->vector[front];

    for (int i = this->front+1; i <= this->end; i++)
    {
        this->vector[i - 1] = this->vector[i];
    }

    // Ultimul element se pune pe 0.
    vector[end] = 0;

    // Scadem dimensiunea vectorului.
    end--;
    return nr;
}

bool Array_Queue::isfull()
{
    if(end>=max)
        return true;
    return false;
}

bool Array_Queue::isempty()
{
    if(front>=end)
        return true;
    return false;
}

void Array_Queue::print()
{
    while(!this->isempty())
    {
        cout<<this->dequeue()<<endl;
    }
}
