#ifndef STACKABSTRACT_H
#define STACKABSTRACT_H

class StackAbstract {
	public :
		virtual void push(int infoNou)  = 0;
		virtual int pop() = 0;
		virtual int peek()  = 0;
		virtual bool isEmpty() = 0;
		virtual void print() = 0;
};

#endif // STACKABSTRACT_H
