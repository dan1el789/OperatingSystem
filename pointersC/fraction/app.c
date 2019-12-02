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
	printFraction(sum);

	printf("\nproduct: \n");
	Fraction *product;
	product = multiplyFractions(&first, &second);
	printFraction(product);

	printf("\nequals: \n");
	printf("first and second: \n\tequal: 0 \n\tnot equal: 1 \n%i \n", compareFractions(&first, &second));


	return 0;
}
