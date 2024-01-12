#include "ArrayStack.h"
#include <iostream>

using namespace std;

ArrayStack::ArrayStack(int capacitate): capacitate(capacitate) {
    this->v = new int[capacitate];
}
ArrayStack::ArrayStack(const ArrayStack& o) {
    this->capacitate = o.capacitate;
    this->top = o.top;
    this->v = new int[capacitate];
    for (int i = 0; i < top; ++i) {
        this->v[i] = o.v[i];
    }
}
ArrayStack::~ArrayStack() {
    delete[] this->v;
}
bool ArrayStack::isEmpty() {
    if (this->top == NULL) {
        return true;
    }
    else
        return false;
}
bool ArrayStack::isFull() {
    if (this->top == this->capacitate) {
        return true;
    }
    else
        return false;
}
int ArrayStack::peek() {
    if (!isEmpty()) {
        return this->v[this->top - 1];
    }
    else {
        cout << "Stiva goala";
        return -1;
    }
}
int ArrayStack::pop() {
    if (!isEmpty()) {
        this->top = this->top - 1;
        return this->v[this->top];
    }
    else {
        cout << "Stiva goala";
        return -1;
    }
}
void ArrayStack::push(int element) {
    if (!isFull()) {
        v[this->top] = element;
        this->top = this->top + 1;
    }
}
