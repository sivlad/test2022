#pragma once


#ifndef STACK_H
#define STACK_H

#include "OneLinkedList.h"
#include <iostream>

using namespace std;

class Stack
{
private:
	OneLinkedList repository;

public:

	Stack()
	{
		cout << "Contructor Stack complite" << endl;
	}

	~Stack()
	{
		cout << "Destructor Stack complite" << endl;
	}

	void Push(int value);
	int Pop();
	int Top();
	void View();
	void Clear();
	bool IsEmpty();

};


#endif
