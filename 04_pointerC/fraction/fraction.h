typedef struct fract {
	int numerator;
	int denominator;
} Fraction;

void reduceFraction(Fraction *fraction);
int getGreatestCommonDivisor(int,int);
void readFraction(Fraction *fraction);
void printFraction(Fraction *fraction);
void addFractions(Fraction *result, Fraction *first, Fraction *second);
void multiplyFractions(Fraction *result, Fraction *first, Fraction *second);
int compareFractions(Fraction *first, Fraction *second);
