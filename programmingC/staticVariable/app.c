#include <stdio.h>
#include "static.h"

int main (void)
{
	int input;
	for(int i = 0; i < 5; i++)
	{
		printf("number: ");
		scanf("%i", &input);
		printf("Overflow: %i \n", overflow(input));
	}
	return 0;
}
