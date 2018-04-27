#include <iostream>
using namespace std;
#include "LinkedList.h"


LinkedList::LinkedList() {
	top = NULL;
}

LinkedList::~LinkedList() {
	clear();
}

void LinkedList::clear()
{
	StackNode* t;
	while (top != NULL)
	{
		t = top;
		top = top->next;
		delete t;
	}
}

int LinkedList::pop() {
	int temp = top->dataItem;
	StackNode* tmp = top;
	top = top->next;
	delete tmp;
	return temp;
}

int LinkedList::isEmpty() {
	if (top == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

int LinkedList::numOfElements() {
	int length = 0;
	StackNode* temp = top;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	return length;
}

void LinkedList::push(int &number) {
	int count = 0;
	StackNode* temp = top;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (count == 20)
		cout << "reached maxed stack size" << endl;
	else if (top == NULL)
	{
		top = new StackNode(number, NULL);
	}
	else
	{
		StackNode* node = new StackNode(top->dataItem, top->next);
		top->dataItem = number;
		top->next = node;
	}
}

void LinkedList::printElements() {
	StackNode *temp;
	temp = top;
	while (temp != NULL)
	{
		cout << temp->dataItem << " ";
		temp = temp->next;
	}
}



