#include <stdio.h>
#include "isbn.h"

int main (void)
{
	char isbn[] = {"0134685997"};
	printf("%s %i\n", isbn, checkIsbn(isbn));
	return checkIsbn(isbn);
}
