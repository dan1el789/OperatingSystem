#include "countLetter.h"

int countLetter(char* text, char letter)
{
	int counter = 0;
	for(int i = 0 ; text[i] != '\0'; i++)
	{
		if(text[i] == letter)
			counter++;
	}
	return counter;
}
