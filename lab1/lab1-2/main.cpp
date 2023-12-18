#include "coadastatica.h"
#include <iostream>

using namespace std;

int main()
{
    Array_Queue* q = new Array_Queue(5);

    try {
        q->enqueue(1);
        q->enqueue(2);
        q->enqueue(3);
        q->enqueue(4);
        q->enqueue(5);
        q->enqueue(6);
        q->enqueue(7);
        q->enqueue(8);
    } catch (Array_Queue::Queue_Overflow e) {
        cout<<"Queue overflow"<<endl;
    }

    q->print();

    delete q;
    return 0;
}
