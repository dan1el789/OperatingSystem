#include "fac.h"
#include <stdio.h>

int main (void)
{
	printf("number: ");
	int number;
	scanf("%i", &number);
	int result = fac_i(number);
	printf("result: %i \n", result);
	result = fac_r(number);
	printf("result: %i \n", result);
}
