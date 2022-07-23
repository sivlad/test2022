#include "StackLab.h"
#include <iostream>
#include <iomanip>
#include <initializer_list>

using namespace std;

StackLab::StackLab() : Top { nullptr }
{

}

StackLab::StackLab(const initializer_list<int>& sourth) : Top{nullptr}
{
/*	for (auto tmp = sourth.begin(); tmp != sourth.end(); tmp++)
	{
		push(*tmp);
	}
*/
	for (auto tmp : sourth)
	{
		push(tmp);
	}
}


StackLab::~StackLab()
{
	while (!empty())
	{
		pop();
	}
}

StackLab& StackLab::push(int x)
{
	NodeLaba* addelem = new NodeLaba(x);

	addelem->next = Top;
	Top = addelem;

	return *this;
}

void StackLab::push(StackLab& T2)
{
	while (!T2.empty())
	{
		push(T2.top());
		T2.pop();
	}
}

void StackLab::pop()
{
	if (Top != nullptr)
	{
		NodeLaba* tmp = Top->next;
		delete Top;
		Top = tmp;
	}
}

int StackLab::top()
{
	if (Top != nullptr)
	{
		return Top->data;
	}
	return 0;
}

bool StackLab::empty()
{
	return Top == nullptr ? true : false;
}

void StackLab::view()
{
	NodeLaba* cursor = Top;
	while (cursor != nullptr)
	{
		cout << setw(5) << cursor->data;
		cursor = cursor->next;
	}
	cout << endl;
}




