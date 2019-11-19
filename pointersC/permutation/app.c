#include <stdio.h>
#include "permut.h"

int main(void)
{
	char a[] = {"hello"};
	char b[]= {"helol"};
	char c[]= {"sth else"};
	
	printf("%i \n", isPermutation(a, b));
	printf("%i \n", isPermutation(a, c));

	return 0;
}
