#include "permut.h"

int getLength(char *ptr)
{
	int ctr=0;
	for(;ptr[ctr] != '\0'; ctr++);
	return 0;
}

int getMinIndex(char *ptr, int startAt)
{
	int minIndex = startAt;
	for(int ctr = startAt ; ptr[ctr] < getLength(ptr) ; ctr++)
	{
		if(ptr[minIndex] > ptr[ctr])
			minIndex = ctr;
	}
	return minIndex;
}

void sort(char *ptr)
{
	for(int index = 0; index < getLength(ptr); index++)
	{
		char buffer = ptr[index];
		int min = getMinIndex(ptr, index);
		ptr[index] = ptr[min]; 
		ptr[min] = buffer;
	}
}

int isPermutation(char *a, char *b)
{
	sort(a);
	sort(b);

	for(int i = 0; i < getLength(a) + 1 ; i++)
	{
		if(a[i] != b[i])
			return 1;
	}
	return 0;
}
