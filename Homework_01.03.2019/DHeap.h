#pragma once
#include "Task.h"

class DHeap
{
	Task *mem;
	int size, i;
public:
	DHeap(int _size);
	void Insert(Task t);
	void DeleteRoot();
	bool IsEmpty()
	{
		return (i == 0);
	}
};
