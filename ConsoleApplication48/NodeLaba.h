#pragma once

#ifndef NODELABA_H
#define NODELABA_H

struct NodeLaba {
	int data;
	NodeLaba* next;
	NodeLaba() { data = 0; next = nullptr; }
	NodeLaba(int x) { data = x; next = nullptr; }
};

#endif
