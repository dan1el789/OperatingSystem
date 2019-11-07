#include<stdlib.h>
char *repeat(char* text)
{
	char* newText = malloc(newLength(text)+1);
	newText[newLength(text)] = '\0';
	int index = 0;
	for(int i = 0; text[i] != '\0'; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			newText[index] = text[j];
			index++;
		}
	}
	printf("wrong position: %s\n", newText);
	return newText;
}

int newLength(char* text)
{
	int newLength = 0;
	for(int i = 0; text[i] != '\0'; i++)
		newLength += i+1;
	return newLength;
}
