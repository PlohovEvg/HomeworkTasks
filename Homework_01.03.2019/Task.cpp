#include <stdlib.h>
#include "Task.h"
#include <iostream>

using namespace std;

Task Create_task()
{
	Task t;

	t.ID = rand() % 91 + 10;
	t.Priority = rand() % 6;
	return t;
}

Task& Task::operator=(const Task &t)
{
	ID = t.ID;
	Priority = t.Priority;
	return *this;
}

bool Task::operator>= (const Task &t)
{
	return (Priority >= t.Priority);
}

void Print(Task t)
{
	cout << "ID:" << t.ID << " Приоритет:" << t.Priority << endl;
}

int min(int a, int b)
{
	if (a <= b)
	{
		return a;
	}
	return b;
}
bool Task::operator< (const Task &t)
{
	return(Priority < t.Priority);
}