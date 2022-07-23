#include "que.h"
#include<iostream>
#include<iomanip>
using namespace std;

NodeLaba* enque(NodeLaba* T, int x)
{
	NodeLaba* new_elem = new NodeLaba(x);
	NodeLaba* cursor = T;
	if (T == nullptr)
	{
		return new_elem;
	}

	while (cursor->next != nullptr)
	{
		cursor = cursor->next;
	}

	cursor->next = new_elem;

	return T;
}

NodeLaba* deque(NodeLaba* H)
{
	if (H == nullptr)
	{
		return nullptr;
	}

	NodeLaba* tmp = H->next;
	delete H;
	return tmp;
}

int first(NodeLaba* H)
{
	if (H == nullptr)
	{
		return 0;
	}

	int element = H->data;

	return element;

}

int last(NodeLaba* T)
{
	if (T == nullptr)
	{
		return 0;
	}

	NodeLaba* cursor = T;
	while (cursor->next != nullptr)
	{
		cursor = cursor->next;
	}

	int element = cursor->data;
	return element;
}

bool empty1(NodeLaba* H)
{
	return H == nullptr ? true : false;
}

void view1(NodeLaba* H)
{
	NodeLaba* cursor = H;

	while (cursor != nullptr)
	{
		cout << setw(5) << cursor->data;
		cursor = cursor->next;
	}

	cout << endl;

}

NodeLaba* clear1(NodeLaba* H)
{
	while (empty1(H) != true)
	{
		H = deque(H);
	}

	return nullptr;
}


NodeLaba* push1(NodeLaba* T1, NodeLaba* T2)
{
	while (empty1(T2) != true)
	{
		T1 = enque(T1, first(T2));
		T2 = deque(T2);
	}

	return T1;
}