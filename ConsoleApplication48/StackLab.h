#pragma once

#ifndef STACKLAB_H
#define STACKLAB_H

#include "NodeLaba.h"
#include <initializer_list>

using namespace std;

class StackLab {
public:
	NodeLaba* Top;

	StackLab();
	StackLab(const std::initializer_list<int>& sourth);

	~StackLab();
	StackLab& push(int x);
	void push(StackLab& T2);
	void pop();
	int top();
	bool empty();
	void view();
};


#endif