#include "fraction.h"
#include <stdio.h>

void readNumerator(Fraction *fraction)
{
	printf("numerator: \n");
	scanf("%i", &fraction->numerator);
}

void readFraction(Fraction *fraction)
{
	readNumerator(fraction); 
}
