#include "fraction.h"
#include <stdio.h>

void readNumerator(Fraction *fraction)
{
	printf("numerator: ");
	scanf("%i", &fraction->numerator);
}

void readDenominator(Fraction *fraction)
{
	printf("denominator: ");
	scanf("%i", &fraction->denominator);
}


void readFraction(Fraction *fraction)
{
	readNumerator(fraction); 
	readDenominator(fraction);
}

void printFraction(Fraction *fraction)
{
	printf(" %i\n", fraction->numerator);
	printf("-----\n");
	printf(" %i\n", fraction->denominator);
}
