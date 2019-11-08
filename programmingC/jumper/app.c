#include <stdio.h>
#include "jump.h"
int main (void)
{
	int data1[] = { 2, 3, -1, 2, -1};
	int size = sizeof(data1) / sizeof(data1[0]);
	printf("jumps: %i \n", jump(data1, size));

	int data2[] = { 2, 3, -1, 2, -2};
	printf("jumps: %i\n", jump(data2, 5));

	int data3[] = {2, 4, -1, 2, -1};
	printf("jumps: %i\n", jump(data3, 5));
	return 0;
}
