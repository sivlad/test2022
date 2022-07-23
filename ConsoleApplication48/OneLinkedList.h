#pragma once

#ifndef ONELINKEDLIST_H
#define ONELINKEDLIST_H

class OneLinkedList;

class Node
{
private:
	int value;
	Node* next;

public:
	Node();
	Node(int value);

	Node& SetValue(int value);
	int GetValue();
	void Print();

	friend OneLinkedList;

};

class OneLinkedList
{
private:
	Node* head;
	Node* tail;
	int size;

public:

	OneLinkedList();
	~OneLinkedList();
	OneLinkedList& AddFront(int value);
	OneLinkedList& AddTail(int value);
	OneLinkedList& AddIndex(int value, int index);
	int GetByIndex(int index);

	OneLinkedList& DeleteFront();
	OneLinkedList& DeleteTail();
	OneLinkedList& DeleteIndex(int index);

	void Print();
	void Clear();
	bool IsEmpty();

};


#endif