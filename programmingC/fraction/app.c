#include <stdio.h>
#include "fraction.h"

int main(void)
{
	Fraction first;
	readFraction(&first);
	printFraction(&first);
	return 0;
}
