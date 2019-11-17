#include "fraction.h"
#include <stdio.h>

Fraction* addFractions(Fraction *first, Fraction *second)
{
	Fraction result;
	result.numerator = first->denominator * second->numerator 
		+ second->denominator * first->numerator;
	result.denominator = first->denominator * second->denominator;
	Fraction *pointer = &result;
	reduceFraction(pointer);
	return pointer;
}

Fraction* multiplyFractions(Fraction *first, Fraction *second)
{
	Fraction product;
	product.numerator = (first->numerator) * (second->numerator);
	product.denominator = (first->denominator) * (second->denominator);
	Fraction *pointer = &product;
	reduceFraction(pointer);
	return pointer;
}

int absolut(int number)
{
	if(number < 0)
		number = number * -1;
	return number;
}

int getGreatestCommonDivisor(int a, int b)
{
	a = absolut(a);
	b = absolut(b);
	int rest = 0;
	while(b != 0)
	{
		rest = a % b;
		a = b;
		b = rest;
	}
	return a;
}

void reduceFraction(Fraction *fraction)
{
	int divider = getGreatestCommonDivisor(fraction->numerator, fraction->denominator);
	fraction->numerator = fraction->numerator / divider;
	fraction->denominator = fraction->denominator / divider;
}
