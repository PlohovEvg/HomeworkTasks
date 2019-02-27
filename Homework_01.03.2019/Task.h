#pragma once

struct Task
{
	int ID;
	int Priority;
	Task& operator=(const Task &t);
	bool operator>= (const Task &t);
	bool operator< (const Task &t);
};

Task Create_task();
void Print(Task t);
int min(int a, int b);
