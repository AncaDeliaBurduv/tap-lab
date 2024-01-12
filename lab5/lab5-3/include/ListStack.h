#ifndef LISTSTACK_H
#define LISTSTACK_H
#include "StackAbstract.h"
#include <iostream>

class ListStack : public StackAbstract {
	class Node {
    private:
	public:
		int info;
		Node* suc;
		Node(int info = 0, Node* succ = NULL);
	};
private:
	Node* top;
public:
	ListStack(int info=0, Node* n = NULL);
	~ListStack();
	ListStack(const ListStack&);
	ListStack& operator=(const ListStack&);
	void push(int) override;
	int pop() override;
	int peek() override;
	bool isEmpty() override;
};

#endif // LISTSTACK_H
