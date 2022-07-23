#pragma once

#ifndef STACKTEMPLATE_H 
#define STACKTEMPLATE_H 

#include <iostream>
#include <iomanip>

struct tag
{
	string str;
	bool valid;
	int index;
	int marker;

};

template <class T>
struct NodeTemplate {
	T data;
	NodeTemplate* next;
	NodeTemplate() { data = 0; next = nullptr; }
	NodeTemplate(T x) { data = x; next = nullptr; }
};


template <class T>
class StackTemplate
{
public:
	NodeTemplate<T>* Top;

	StackTemplate();
	~StackTemplate();

	StackTemplate& push(T x);
	void push(StackTemplate<T>& T2);
	void pop();
	T top();
	bool empty();
	void view();
	void clear();
};


template <class T>
StackTemplate<T>::StackTemplate() : Top{ nullptr }
{
}


template <class T>
StackTemplate<T>::~StackTemplate()
{
	while (!empty())
	{
		pop();
	}
}

template <class T>
StackTemplate<T>& StackTemplate<T>::push(T x)
{
	NodeTemplate<T>* addelem = new NodeTemplate<T>(x);

	addelem->next = Top;
	Top = addelem;

	return *this;
}

template <class T>
void StackTemplate<T>::push(StackTemplate<T>& T2)
{
	while (!T2.empty())
	{
		push(T2.top());
		T2.pop();
	}
}

template <class T>
void StackTemplate<T>::pop()
{
	if (Top != nullptr)
	{
		NodeTemplate<T>* tmp = Top->next;
		delete Top;
		Top = tmp;
	}
}

template <class T>
T StackTemplate<T>::top()
{
	if (Top != nullptr)
	{
		return Top->data;
	}
	return 0;
}

tag StackTemplate<tag>::top()
{
	if (Top != nullptr)
	{
		return Top->data;
	}
	tag tmp{ "", true, 0 };
	return tmp;
}


template <class T>
bool StackTemplate<T>::empty()
{
	return Top == nullptr ? true : false;
}

template <class T>
void StackTemplate<T>::view()
{
	NodeTemplate<T>* cursor = Top;
	while (cursor != nullptr)
	{
		cout << setw(5) << cursor->data;
		cursor = cursor->next;
	}
	cout << endl;
}

template <class T>
void StackTemplate<T>::clear()
{
	while (!empty())
	{
		pop();
	}
}

#endif // !STACKTEMPLATE_H 
