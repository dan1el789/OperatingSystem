#include <string.h>
int countDiffs(char* text1, char* text2)
{
	if(strlen(text1) != strlen(text2))
		return -1;
	int counter = 0;
	for(int i = 0; text1[i] != '\0' ; i++)
	{
		if(text1[i] != text2[i])
			counter++;
	}
	return counter;
}
