#include <stdio.h>
#include "do.h"

void rubbish(char *c){
	puts("I'm a function pointer");
	printf("Thats my param: %s\n", c);
}

int main(void)
{
	void (*fnc)(char*);
	fnc = rubbish;
	char* ptr = {"hello"}; 
	printString(ptr);
	printStringLength(ptr);
	testPattern(ptr, fnc);
	return 0;
}
