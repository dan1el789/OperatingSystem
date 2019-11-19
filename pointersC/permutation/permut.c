#include "permut.h"
#include <stdio.h>

int getLength(char *ptr)
{
	int ctr=0;
	for(;ptr[ctr] != '\0'; ctr++);
	return ctr;
}

int getMinIndex(char *ptr, int startAt)
{
	int minIndex = startAt;
	for(int ctr = startAt ; ctr < getLength(ptr) ; ctr++)
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

void mstrcpy(char *dest, char *ptr)
{
	for(int i = 0; i < (getLength(ptr)+1); i++)
		dest[i] = ptr[i];
}


int isPermutation(char *a, char *b)
{
	char wa[getLength(a)+1];
       	mstrcpy(wa, a);
	char wb[getLength(b)+1];
	mstrcpy(wb, b);
	sort(wa);
	sort(wb);

	for(int i = 0; i < getLength(wa) + 1 ; i++)
	{
		if(wa[i] != wb[i])
			return 1;
	}
	return 0;
}
