typedef struct fract {
	int numerator;
	int denominator;
} Fraction;

void reduceFraction(Fraction *fraction);
int getGreatestCommonDivisor(int,int);
void readFraction(Fraction *fraction);
void printFraction(Fraction *fraction);
Fraction* addFractions(Fraction *first, Fraction *second);
Fraction* multiplyFractions(Fraction *first, Fraction *second);
int compareFractions(Fraction *first, Fraction *second);
