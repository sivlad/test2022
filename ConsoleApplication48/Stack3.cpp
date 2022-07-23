#include "Stack3.h"


#include <iostream>
#include <iomanip>

using namespace std;

Stack3::Stack3() : Top{ nullptr }
{

}



Stack3::~Stack3()
{
	while (!empty())
	{
		pop();
	}
}

Stack3& Stack3::push(char x)
{
	Node3* addelem = new Node3(x);

	addelem->next = Top;
	Top = addelem;

	return *this;
}

void Stack3::push(Stack3& T2)
{
	while (!T2.empty())
	{
		push(T2.top());
		T2.pop();
	}
}

void Stack3::pop()
{
	if (Top != nullptr)
	{
		Node3* tmp = Top->next;
		delete Top;
		Top = tmp;
	}
}

char Stack3::top()
{
	if (Top != nullptr)
	{
		return Top->data;
	}
	return 0;
}

bool Stack3::empty()
{
	return Top == nullptr ? true : false;
}

void Stack3::view()
{
	Node3* cursor = Top;
	while (cursor != nullptr)
	{
		cout << setw(5) << cursor->data;
		cursor = cursor->next;
	}
	cout << endl;
}