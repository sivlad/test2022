#pragma once

#ifndef QUEUE_H
#define QUEUE_H

#include"NodeLaba.h"

struct Queue {
	NodeLaba* Head, * Tail;
	Queue();
	~Queue();
	void enque(int x);
	void enque(Queue& T2);
	void deque();
	int first();
	int last();
	bool empty();
	void view();
};

#endif