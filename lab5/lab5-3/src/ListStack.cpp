#include "ListStack.h"
#include <iostream>

ListStack::Node::Node(int info, Node* succ) : info(info), suc(succ) {}
ListStack::ListStack(int info, Node* n){
    this->top=new Node(info,n);
}
ListStack::ListStack(const ListStack& obiect) {
	this->top = obiect.top;
}
ListStack::~ListStack() {
	this->top = NULL;
}
bool ListStack::isEmpty() {
	if (this->top == NULL) {
		return true;
	}
	else {
		return false;
	}
}
void ListStack::push(int infoNou) {
	Node* temp = new Node(infoNou);
	temp->info = infoNou;
	temp->suc = this->top;
	this->top = temp;
}
int ListStack::pop() {
	if (this->top != NULL) {
		Node* temp = this->top;
		this->top = this->top->suc;
		return temp->info;
	}
	else {
		std::cout << "Eroare -1";
		return -1;
	}
}
int ListStack::peek() {
	if (!isEmpty()) {
		return this->top->info;
	}
	else {
		std::cout << "Eroare -2";
		return -2;
	}
}
