#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList()
{
	length = 0;
	head = NULL;
}

int LinkedList::getLength()
{
	return length;
}

bool LinkedList::isEmpty()
{
	return head==NULL;
}

void LinkedList::printListInfo()
{
	nodeType* temp = head; 

	while (temp != NULL)
	{
		cout << temp->info << endl;
		temp = temp->link;

	}

}

int LinkedList::search(int item)
{
	int index = -1; 

	nodeType* temp = head; 

	while (temp != NULL)
	{
		if (temp->info == item)
		{
			return index + 1;
		}
		temp = temp->link;
		index++;

	}

	return -1;
}
