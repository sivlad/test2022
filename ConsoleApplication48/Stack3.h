#pragma once



#ifndef STACK3
#define STACK3

#include"Node_3.h"

using namespace std;

class Stack3 {
public:
	Node3* Top;

	Stack3();
	~Stack3();
	Stack3& push(char x);
	void push(Stack3& T2);
	void pop();
	char top();
	bool empty();
	void view();
};


#endif
