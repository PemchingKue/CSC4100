//Pemching Kue
//fr6680

#include <iostream>
using namespace std;
#include "LinkedList.h"

void print_help()
{
	cout << endl << "Commands:" << endl;
	cout << "  H  : Help (displays this message)" << endl;
	cout << "  +x : Push x" << endl;
	cout << "  -  : Pop" << endl;
	cout << "  E  : Empty stack?" << endl;
	cout << "  N  : Number of Elements in the Stack" << endl;
	cout << "  P  : Print the Stack" << endl;
	cout << "  Q  : Quit" << endl;
	cout << endl;
}

int main() {

	cout << "Stack Implementation Using Linked List" << endl;

	int number;
	char cmd;
	LinkedList s;

	print_help();
	do {
		cout << endl << "Input Choice: ";                  // Read command
		cin >> cmd;
		if (cmd == '+')
			cin >> number;

	switch (cmd)
	{
	case 'H': case 'h':
		print_help();
		break;

	case '+':
		cout << "Push " << number << " into Stack" << endl;
		s.push(number);
		break;

	case '-':
		cout << "Popped " << s.pop() << endl;
		break;

	case 'E': case 'e':
		if (s.isEmpty() == 1) {
			cout << "The Stack is Empty." << endl;
		}
		else {
			cout << "The Stack is not Empty." << endl;
		}
		break;

	case 'N': case 'n':
		cout << "Number of Elements in the stack: " << s.numOfElements() << endl;
		break;

	case 'P': case 'p':
		cout << "Elements in the Stack: ";
		s.printElements();
		break;

	case 'Q': case 'q':                   // Quit Program
		break;
	}

	}while (cin && cmd != 'Q' && cmd != 'q');

	return 0;
}