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
	if (index <0 || index> length-1)
		throw 0; // out of index 

	if (isEmpty())
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

void LinkedList::clearList()
{
	while (!isEmpty())
		deleteFirstNode();
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

void LinkedList::insertAtEnd(int item)
{
	//0. ask if the list is empty, if yes, then use insert at start 
	if (isEmpty())
	{
		insertAtStart(item);
		return;
	}

	// 1. Create a new node

	nodeType* newNode = new nodeType;
	newNode->info = item;
	newNode->link = NULL;

	// 2. traverse to the last node 

	nodeType* temp = head; 

	while (temp->link != NULL)
	{
		temp = temp->link;

	}

	//3. make the link for the last node point to the new node

	temp->link = newNode;

	// 4. increment length
	length++; 




}

void LinkedList::insertAtIndex(int index, int item)
{
	// validation 
	if (index <0 || index> length - 1)
		throw 0; // out of index 

	if (index == 0)
	{
		insertAtStart(item);
		return; 

	}

	if (index == length-1)
	{
		insertAtEnd(item);
		return;

	}

	// navigate to the index-1
	nodeType *temp = head;
	int tempIndex = 0;
	while (tempIndex != index - 1)
	{
		temp = temp->link;
		tempIndex++;
	}

	// create the new node
	
	nodeType* newNode = new nodeType();
	newNode->info = item;
	newNode->link = NULL;

	// change the pointers 

	newNode->link = temp->link;
	temp->link = newNode; 

	// increment the length
	length++;


}

int LinkedList::getFirstNode()
{
	return (*this)[0];
}

int LinkedList::getLastNode()
{
	return (*this)[length-1];
}

void LinkedList::deleteFirstNode()
{
	if (isEmpty())
		throw 1;

	//1
	nodeType* temp = head; 

	// 2. 
	head = head->link; 

	//3. 
	delete temp; 

	length--;
}

void LinkedList::deleteLastNode()
{
	// validation 
	if (isEmpty())
		throw 1;

	// navigation to the next to last node

	nodeType* temp = head; 
	while (temp->link->link != NULL)
		temp = temp->link; 

	// delete the last node

	delete temp->link; 

	temp->link = NULL; 

	// decrement the length 

	length--; 


}

void LinkedList::deleteAtIndex(int index)
{

	// validation 
	if (index <0 || index> length - 1)
		throw 0; // out of index 

	if (index == 0)
	{
		deleteFirstNode();
		return;

	}

	if (index == length - 1)
	{
		deleteLastNode();
		return;

	}

	// navigate to the index-1
	nodeType* temp = head;
	int tempIndex = 0;
	while (tempIndex != index - 1)
	{
		temp = temp->link;
		tempIndex++;
	}

	// add another pointer to point to the node we want to delete
	nodeType* nodeToDelete = temp->link; 


	// change the pointers 

	temp->link = temp->link->link; 

	delete nodeToDelete;

	// decrement length 

	length--;

}

LinkedList* LinkedList::copyList()
{  
	// deep copy 

	// create a new list 

	LinkedList* newList = new LinkedList();

	// Traverse and read the items one by one, 
	// and insert them at the end of the new list 

	nodeType* temp = head;
	while (temp != NULL)
	{
		newList->insertAtEnd(temp->info);
		temp = temp->link;
	}

	return newList;
}
