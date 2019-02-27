#include "DHeap.h"

DHeap::DHeap(int _size)
{
	size = _size;
	mem = new Task[size];
	i = 0;
}

void DHeap::Insert(Task t)
{
	mem[i] = t;
	i++;

	int tind1, tind2;

	tind1 = i - 1;
	tind2 = (i + 1) / 2 - 1;

	while (tind2 >= 0)
	{
		if (mem[tind2] >= mem[tind1])
		{
			return;
		}
		Task temp;
		temp = mem[tind2];
		mem[tind2] = mem[tind1];
		mem[tind1] = temp;
		tind1 = tind2;
		tind2 = (tind1 + 1) / 2 - 1;
	}
}

void DHeap::DeleteRoot()
{
	Print(mem[0]);
	mem[0] = mem[i];
	i--;

	int left, right,tind;
	tind = 0;
	left = (tind + 1) * 2 - 1;
	right = min(left + 1, size);
	
	while ((tind <= i)&&(left<=size))
	{
		if (mem[left] >= mem[right])
		{
			if (mem[tind] < mem[left])
			{
				Task temp;
				temp = mem[tind];
				mem[tind] = mem[left];
				mem[left] = temp;
				tind = left;
				left = (tind + 1) * 2 - 1;
				right = min(left + 1, size);
			}
			else
			{
				break;
			}
		}
		else
		{
			if (mem[tind] < mem[right])
			{
				Task temp;
				temp = mem[tind];
				mem[tind] = mem[right];
				mem[right] = temp;
				tind = right;
				left = (tind + 1) * 2 - 1;
				right = min(left + 1, size);
			}
			else
			{
				break;
			}
		}
	}
}