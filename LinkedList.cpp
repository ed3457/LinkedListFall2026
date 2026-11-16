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

int LinkedList::operator[](int index)
{
	if (index <0 || index> length)
		throw 0; // out of index 

	if (length == 0)
		throw 1; // the list is empty 

	nodeType* temp = head; 

	int tempIndex = 0; 

	while (temp != NULL)
	{
		if (tempIndex == index)
			return temp->info;

		tempIndex++;
		temp = temp->link;

	}

}

void LinkedList::insertAtStart(int item)
{
	// 1. Create a new node

	nodeType* newNode = new nodeType;
	newNode->info = item; 
	newNode->link = NULL; 

	//2. link the link of the new node to the head

	newNode->link = head; 

	head = newNode;

	//3. increment the length

	length++; 

}
