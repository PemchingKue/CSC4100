#include <iostream>
using namespace std;

class LinkedList
{

public:

	int pop();
	int isEmpty();
	int numOfElements();

	void push(int &number);
	void printElements();
	void clear();

	LinkedList();
	~LinkedList();

private:

	class StackNode {
	public:
		StackNode(int Data, StackNode* nextPtr)
		{
			dataItem = Data;
			next = nextPtr;
		}

		int dataItem;
		StackNode* next;
	};

	StackNode* top;
};