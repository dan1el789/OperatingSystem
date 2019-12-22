#include "fraction.h"

void addFractions(Fraction *result, Fraction *first, Fraction *second)
{
	result->numerator = first->denominator * second->numerator 
		+ second->denominator * first->numerator;
	result->denominator = first->denominator * second->denominator;
	reduceFraction(result);
}

void multiplyFractions(Fraction *result, Fraction *first, Fraction *second)
{
	result->numerator = (first->numerator) * (second->numerator);
	result->denominator = (first->denominator) * (second->denominator);
	reduceFraction(result);
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

int compareFractions(Fraction *first, Fraction *second)
{
	Fraction minusOne;
	minusOne.numerator = -1;
	minusOne.denominator = 1;
	Fraction minusFirst;
       	multiplyFractions(&minusFirst, first, &minusOne);
	Fraction sum;
        addFractions(&sum, &minusFirst, second);
	if(sum.numerator == 0)
		return 0;
	return 1;

}
