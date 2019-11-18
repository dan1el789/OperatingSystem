#include <stdio.h>
#include "do.h"

int main(void)
{
	char* ptr = {"hello world"}; 
	printString(ptr);
	printStringLength(ptr);
	return 0;
}
