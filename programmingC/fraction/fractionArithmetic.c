#include "fraction.h"
#include <stdio.h>

Fraction* addFractions(Fraction *first, Fraction *second)
{
	Fraction result;
	result.numerator = first->denominator * second->numerator 
		+ second->denominator * first->numerator;
	result.denominator = first->denominator * second->denominator;
	Fraction *pointer = &result;
	return pointer;
}

Fraction* multiplyFractions(Fraction *first, Fraction *second)
{
	Fraction product;
	product.numerator = (first->numerator) * (second->numerator);
	product.denominator = (first->denominator) * (second->denominator);
	Fraction *pointer = &product;
	return pointer;
}
