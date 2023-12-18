#include "StivaStatica.h"
#include <iostream>

using namespace std;

int main()
{
    Array_Stack* stack=new Array_Stack(5);

    try {
        stack->push(1);
        stack->push(2);
        stack->push(3);
        stack->push(4);
        stack->push(5);
        stack->push(6);
        stack->push(7);
        stack->push(8);

    } catch (Array_Stack::Stack_Overflow e) {
        cout<<"Stack overflow"<<endl;
    }

    stack->print();

    delete stack;
    return 0;
}
