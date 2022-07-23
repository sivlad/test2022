#pragma once


#ifndef NODE3
#define NODE3

struct Node3 {
	char data;
	Node3* next;
	Node3() { data = 0; next = nullptr; }
	Node3(char x) { data = x; next = nullptr; }
};

#endif