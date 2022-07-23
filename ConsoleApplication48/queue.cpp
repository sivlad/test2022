#include "queue.h"
#include<iomanip>
#include<iostream>
using namespace std;

Queue::Queue() : Head {nullptr}, Tail {nullptr}
{

}

Queue::~Queue()
{
	while (empty() != true)
	{
		deque();
	}
}


void Queue::enque(int x)
{
	NodeLaba* element = new NodeLaba(x);
	if (Head == nullptr)
	{
		Head = element;
		Tail = element;
		return;
	}

	Tail->next = element;
	Tail = element;

}


void Queue::enque(Queue& T2)
{
	while (T2.empty() != true)
	{
		enque(T2.first());
		T2.deque();
	}
}

void Queue::deque()
{
	NodeLaba* tmp = Head->next;
	delete Head;
	Head = tmp;

	if (tmp == nullptr)
	{
		Tail = nullptr;
	}
}


int Queue::first()
{

	if (Head == nullptr)
	{
		return 0;
	}
	int f_ele = Head->data;

	return f_ele;
}

int Queue::last()
{
	if (Tail == nullptr)
	{
		return 0;
	}

	int l_ele = Tail->data;

	return l_ele;
}

bool Queue::empty()
{
	return Head == nullptr ? true : false;
}

void Queue::view()
{
	NodeLaba* cursor = Head;
	while (cursor != nullptr)
	{
		cout << setw(5) << cursor->data;

		cursor = cursor->next;
	}

	cout << endl;
}