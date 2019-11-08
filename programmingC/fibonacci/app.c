#include<stdio.h>
#include "fib.h"

int main (void)
{
	printf("number: ");
	unsigned int number = 1;
	scanf("%i", &number);
	number = fib(number);
	printf("fib: %i \n", number);

	return 0;
}

