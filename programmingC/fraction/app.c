#include <stdio.h>
#include "fraction.h"

int main(void)
{
	Fraction first;
	readFraction(&first);
	printFraction(&first);

	Fraction second;
	readFraction(&second);
	printFraction(&second);

	Fraction *sum;
        sum = addFractions(&first, &second);
	printFraction(sum);

	return 0;
}
