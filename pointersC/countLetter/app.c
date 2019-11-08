#include <stdio.h>
#include "countLetter.h"

int main(void)
{
	char text[255];
	printf("word: ");
	scanf("%s", text);
	
	char letter;
	printf("letter: ");
	scanf(" %c", &letter);

	printf("%i \n", countLetter(text, letter));
	return 0;
}
