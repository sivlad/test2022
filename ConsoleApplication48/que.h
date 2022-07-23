#pragma once

#ifndef QUE_H
#define QUE_H

#include"NodeLaba.h"

#include<iostream>
#include<iomanip>
using namespace std;

NodeLaba* enque(NodeLaba* T, int x);
NodeLaba* deque(NodeLaba* H);
int first(NodeLaba* H);
int last(NodeLaba* T);
bool empty1(NodeLaba* H);
void view1(NodeLaba* H);

NodeLaba* clear1(NodeLaba* H);

NodeLaba* push1(NodeLaba* T1, NodeLaba* T2);





#endif


