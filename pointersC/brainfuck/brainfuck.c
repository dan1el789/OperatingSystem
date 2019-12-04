#include "brainfuck.h"
#include <stdio.h>

void interpretBrainfuck(char* input)
{
	char workOn[255];
	for(int i = 0; i < 255; i++)
		workOn[i]=0;
	char *ptr = workOn;
	char *store = NULL;
	
	while(*input != '#')
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
			store = input;
		}
		if(*input == '[' && *ptr == 0)
		{
			for(;*input != ']'; *input++);
		}
		if(store != NULL && *input == ']')
		{
			input = store;
			input--;
			store = NULL;
		}
		input++;			
	}
}
