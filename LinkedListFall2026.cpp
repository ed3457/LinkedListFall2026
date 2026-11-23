// LinkedListFall2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
using namespace std; 

int main()
{
	LinkedList list1; 

	/*cout << list1.getLength()<<endl;

	cout << list1.isEmpty() << endl;*/

	list1.insertAtStart(4);
	list1.insertAtStart(5);
	list1.insertAtStart(1);
	list1.insertAtStart(0);
	list1.insertAtStart(3);

	/*list1.printListInfo();

	cout << list1[4] << endl;

	cout << list1.getLength() << endl;

	cout << list1.search(3) << endl;*/

	/*cout << list1.getFirstNode() << endl;
	cout << list1.getLastNode() << endl;*/


	/*list1.deleteFirstNode();
	cout << list1.getFirstNode() << endl;*/

	//list1.clearList();

	//cout << list1.isEmpty() << endl;

	//list1.insertAtEnd(10);

	list1.insertAtIndex(2, 100);
	list1.insertAtIndex(2, 80);
	list1.printListInfo();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
