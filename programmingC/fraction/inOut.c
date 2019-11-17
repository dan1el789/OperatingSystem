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
