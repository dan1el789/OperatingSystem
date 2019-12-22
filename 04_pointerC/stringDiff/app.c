#include <stdio.h>
#include "stringDiff.h"

int main(void)
{
	char text1[255];
	printf("text1: ");
	scanf("%s", text1);
	
	char text2[255];
	printf("text2: ");
	scanf("%s", text2);

	printf("Diff: %i \n", countDiffs(text1, text2));
	
	return 0;
}
