#include "do.h"
#include <stdio.h>

void printString(char *c)
{
	while(*c != '\0')
		printf("%c", *c++);
	printf("\n");
}

void printStringLength(char *c)
{
	int i;
	for(i=0; *c != '\0'; i++, *c++);
	printf("%i\n", i);
}
