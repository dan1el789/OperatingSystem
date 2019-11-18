#include "do.h"
#include <stdio.h>

void printString(char *c)
{
	while(*c != '\0')
		printf("%c", *c++);
	printf("\n");
}
