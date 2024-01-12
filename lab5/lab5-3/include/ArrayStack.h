#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include "StackAbstract.h"

class ArrayStack: public StackAbstract {
	private :
		int top;
		int capacitate;
		int* v;
	public :
		ArrayStack(int capacitate=0);
		~ArrayStack();
		ArrayStack(const ArrayStack&);
		ArrayStack& operator=(const ArrayStack&);
		void push(int) override;
		int pop() override;
		int peek() override;
		bool isEmpty() override;
		bool isFull();
};

#endif // ARRAYSTACK_H
