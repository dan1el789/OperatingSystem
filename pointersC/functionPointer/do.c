#include "do.h"
#include <stdio.h>

void printString(char *c)
{
	char* ptr = &*c;
	while(*ptr != '\0')
		printf("%c", *ptr++);
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

char *clone(char *c)
{
	char copy[getStringLength(c)+1]; 
	for(int i = 0; i < (getStringLength(c)+1) ; i++)
		copy[i] = c[i];
	char *ptr = copy;
	return  ptr;

}

int testPattern(char *source, void (*fun)(char *))
{
	fun(source);
	
	return 0;
}
