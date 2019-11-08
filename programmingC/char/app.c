#include <stdio.h>
#include "convert.h"
int main (void)
{
	char input[255];
	printf("text: ");
	scanf("%s", input);
	convert(input);
	printf("%s \n", input); 

	return 0;
}
