#pragma once

struct nodeType
{
	int info;

	nodeType* link;

} ;


class LinkedList
{

private:

	nodeType* head; 
	int length;

public:
	LinkedList();

	int getLength(); // returns the size 

	bool isEmpty(); 

	void printListInfo();

	int search(int item);

	int operator [](int index);

	void clearList();// empty and deallocte the nodes

	void insertAtStart(int item); 

	int getFirstNode();

	int getLastNode();

	void deleteFirstNode();


};

