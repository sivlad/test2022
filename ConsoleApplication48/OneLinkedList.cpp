#include "OneLinkedList.h"
#include <iostream>
#include <iomanip>

using namespace std;

Node::Node() : value {0} , next {nullptr}
{
}

Node::Node(int value)
{
	this->value = value;
	next = nullptr;
}

Node& Node::SetValue(int value)
{
	this->value = value;
	return *this;
}

int Node::GetValue()
{
	return value;
}

void Node::Print()
{
	cout << setw(5) << value;
}


OneLinkedList::OneLinkedList() : head {nullptr}, tail {nullptr}, size { 0 }
{
	cout << "Contructor OneLinkedList complite" << endl;
}

OneLinkedList& OneLinkedList::AddFront(int value)
{
	Node* addnode = new Node(value);

	if (head == nullptr)
	{
		head = addnode;
		tail = addnode;
		size++;
		return *this;
	}

	addnode->next = head;
	head = addnode;
	size++;

	return *this;
}

OneLinkedList& OneLinkedList::AddTail(int value)
{

	Node* addnode = new Node(value);

	if (head == nullptr)
	{
		head = addnode;
		tail = addnode;
		size++;
		return *this;
	}

	tail->next = addnode;
	tail = addnode;
	size++;

	return *this;
}

void OneLinkedList::Print()
{
	if (head == nullptr)
	{
		return;
	}

	Node* cursor = head;

	while (cursor != nullptr)
	{
		cursor->Print();
		cursor = cursor->next;
	}

	cout << endl;
}

OneLinkedList& OneLinkedList::DeleteFront()
{
	if (head == nullptr)
	{
		return *this;
	}

	if (head->next == nullptr)
	{
		delete head;
		head = nullptr;
		tail = nullptr;
		size--;
		return *this;
	}

	Node* tmp = head;
	head = head->next;
	delete tmp;
	size--;
	return *this;
}

OneLinkedList& OneLinkedList::DeleteTail()
{
	if (head == nullptr)
	{
		return *this;
	}

	if (head->next == nullptr)
	{
		delete head;
		head = nullptr;
		tail = nullptr;
		size--;
		return *this;
	}

	Node* prevNode = head;

	while (prevNode->next->next != nullptr)
	{
		prevNode = prevNode->next;
	}

	delete tail;
	tail = prevNode;
	prevNode->next = nullptr;

	size--;
	return *this;
}

OneLinkedList& OneLinkedList::DeleteIndex(int index)
{
	if (head == nullptr)
	{
		return *this;
	}

	if (!((index > 0) && (index <= size)))
	{
		cout << "Invalid index" << endl;
		return *this;
	}

	Node* cursor = head;
	Node* cursor_prev = nullptr;

	for (int i = 0; i < index - 1; i++)
	{
		cursor_prev = cursor;
		cursor = cursor->next;
	}

	if (cursor_prev == nullptr)
	{
		DeleteFront();
		return *this;
	}

	if (cursor->next == nullptr)
	{
		delete cursor;
		cursor_prev->next = nullptr;
		tail = cursor_prev;
		size--;
		return *this;
	}

	cursor_prev->next = cursor->next;
	delete cursor;
	size--;
	return *this;
}

OneLinkedList& OneLinkedList::AddIndex(int value, int index)
{
	Node* addNode = new Node(value);

	if (!((index >= 0) && (index <= size)))
	{
		cout << "Invalid index" << endl;
		return *this;
	}

	if ((index == 0) && (head == nullptr))
	{
		AddFront(value);
		return *this;
	}

	if ((index == 0) && (head != nullptr))
	{
		cout << "Invalid index" << endl;
		return *this;
	}

	Node* cursor = head;
	Node* cursor_prev = nullptr;

	for (int i = 0; i < index; i++)
	{
		cursor_prev = cursor;
		cursor = cursor->next;
	}

	cursor_prev->next = addNode;
	addNode->next = cursor;
	size++;

	return *this;
}

OneLinkedList::~OneLinkedList()
{
	Node* cursor = head;

	while (cursor != nullptr)
	{
		cursor = cursor->next;
		DeleteFront();
	}

	cout << "Destructor OneLinkedList complite" << endl;
}

int OneLinkedList::GetByIndex(int index)
{
	if (!((index > 0) && (index <= size)))
	{
		cout << "Invalid index" << endl;
		return 0;
	}

	Node* cursor = head;

	for (int i = 0; i < index - 1; i++)
	{
		cursor = cursor->next;
	}

	return cursor->value;
}

void OneLinkedList::Clear()
{
	Node* cursor = head;

	while (cursor != nullptr)
	{
		cursor = cursor->next;
		DeleteFront();
	}
}

bool OneLinkedList::IsEmpty()
{
	return !size;
}
