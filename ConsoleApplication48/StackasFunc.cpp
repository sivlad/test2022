#include "StackasFunc.h"
#include <iomanip>
#include <iostream>

using namespace std;

NodeLaba* push(NodeLaba* T, int x)
{
	NodeLaba* addelem = new NodeLaba(x);

	addelem->next = T;
	return addelem;
}

NodeLaba* pop(NodeLaba* T)
{
	NodeLaba* tmp = T->next;
	delete T;
	return tmp;
}

int top(NodeLaba* T)
{
	if (T != nullptr)
	{
		return T->data;
	}
	return 0;
}

void view(NodeLaba* T)
{
	NodeLaba* cursor = T;
	while (cursor != nullptr)
	{
		cout << setw(5) << cursor->data;
		cursor = cursor->next;
	}
	cout << endl;
}

bool empty(NodeLaba* T)
{
	if (T == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
//	return T == nullptr ? true : false;
}

NodeLaba* clear(NodeLaba* T)
{
	NodeLaba* cursor = T;
	NodeLaba* tmp = nullptr;
	while (cursor != nullptr)
	{
		tmp = cursor->next;
		delete cursor;
		cursor = tmp;
	}

	return nullptr;
}

NodeLaba* push(NodeLaba* T1, NodeLaba* T2)
{
	while (!empty(T2))
	{
		T1 = push(T1, top(T2));
		T2 = pop(T2);
	}
	T2 = nullptr;
	return T1;
}

