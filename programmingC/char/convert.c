#include "convert.h"
void convert(char input[])
{
	for(int i = 0; input[i] != '\0'; i++)
	{
		if(input[i] == '!')
			i = i + skip(input, i);
		input[i] = invert(input[i]);
	}
	
}
int skip(char input[], int i)
{
	for(int j = 1; input[i+j] != '\0'; j++)
	{
		if(input[i+j] == '!')
			return j;
	}
	return 0;
}

char invert(char c)
{
	if('z' >= c && c >= 'a')
		return c + ('A' - 'a');
	if('Z' >= c && c >= 'A') 
		return c + ('a' - 'A');
	return c;
}

