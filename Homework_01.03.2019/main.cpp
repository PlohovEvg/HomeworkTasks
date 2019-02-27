#include <iostream>
#include "Task.h"
#include "DHeap.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n,i;

	cout << "Сколько задач создать?" << endl;
	cin >> n;

	DHeap h(n);

	for (i = 0; i < n; i++)
	{
		Task t;
		t = Create_task();
		h.Insert(t);
	}

	while (h.IsEmpty() == false)
	{
		h.DeleteRoot();
	}
	return 0;
}