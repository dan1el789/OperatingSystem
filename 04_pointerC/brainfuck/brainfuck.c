#include "brainfuck.h"
#include <stdio.h>

void interpretBrainfuck(char* input)
{
	char workOn[255];
	for(int i = 0; i < 255; i++)
		workOn[i]=0;
	char *ptr = workOn;
	char *store[20];
	for(int i = 0; i < 20; i++)
		store[i] = NULL;
	
	int loopCount=0;
	while(*input != '\0')
	{	
		if(*input == '+')
		 	*ptr = *ptr + 1;
		if(*input == '-')
			*ptr = *ptr - 1;
		if(*input == '<')
			ptr--;
		if(*input == '>')
			ptr++;
		if(*input == '.')
			printf("%c", *ptr);
		if(*input == ',')
			scanf("%c", ptr);
		if(*input == '[' && *ptr != 0)
		{
			loopCount++;
			printf("%i\n", loopCount);
			store[loopCount] = input;
		}
		if(*input == '[' && *ptr == 0)
		{
			printf("\n%p;", input);
			for(;*input != ']'; input++);
			printf("%c;%p", *input,input);
		}
		if(store[loopCount] != NULL && *input == ']')
		{
			input = store[loopCount];
			input--;
			store[loopCount] = NULL;
			loopCount--;
		}
		input++;			
	}
}
