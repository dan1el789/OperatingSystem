#include "fraction.h"

Fraction* addFractions(Fraction *first, Fraction *second)
{
	Fraction *newFraction;
	newFraction->numerator = first->denominator * second->numerator 
		+ second->denominator * first->numerator;
	newFraction->denominator = first->denominator * second->denominator;
	return newFraction;
}
