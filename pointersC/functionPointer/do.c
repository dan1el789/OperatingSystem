#include "do.h"
#include <stdio.h>

void printString(char *c)
{
	while(*c != '\0')
		printf("%c", *c++);
	printf("\n");
}

int getStringLength(char *c)
{
	int i;
	for(i=0; *c != '\0'; i++, *c++);
	return i;
}

void printStringLength(char *c)
{
	printf("%i\n", getStringLength(c));
}

int testPattern(char *source, void (*fun)(char *)){
	
}
