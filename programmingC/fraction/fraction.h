typedef struct fract {
	int numerator;
	int denominator;
} Fraction;

int getGreatestCommonDivisor(Fraction *first, Fraction *second);
void readFraction(Fraction *fraction);
void printFraction(Fraction *fraction);
Fraction* addFractions(Fraction *first, Fraction *second);
Fraction* multiplyFractions(Fraction *first, Fraction *second);
int compareFractions(Fraction *first, Fraction *second);
