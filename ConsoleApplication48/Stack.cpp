#include "Stack.h"

void Stack::Push(int value)
{
	repository.AddFront(value);
}

int Stack::Pop()
{
	int res = repository.GetByIndex(1);
	repository.DeleteFront();
	return res;
}

int Stack::Top()
{
	int res = repository.GetByIndex(1);
	return res;
}

void Stack::View()
{
	repository.Print();
}

void Stack::Clear()
{
	repository.Clear();
	cout << "Stack is clear" << endl;
}

bool Stack::IsEmpty()
{
	return repository.IsEmpty();
}

