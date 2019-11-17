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

	printf("\nsum: \n");
	Fraction *sum;
        sum = addFractions(&first, &second);
	reduceFraction(sum);
	printFraction(sum);

	printf("\nproduct: \n");
	Fraction *product;
	product = multiplyFractions(&first, &second);
	reduceFraction(product);
	printFraction(product);

	return 0;
}
