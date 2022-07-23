#pragma once

#ifndef STACKASFUNC_H
#define STACKASFUNC_H

#include "NodeLaba.h"

NodeLaba* push(NodeLaba* T, int x);
NodeLaba* pop(NodeLaba* T);
int top(NodeLaba* T);
void view(NodeLaba* T);
bool empty(NodeLaba* T);
NodeLaba* clear(NodeLaba* T);

NodeLaba* push(NodeLaba* T1, NodeLaba* T2);

#endif
