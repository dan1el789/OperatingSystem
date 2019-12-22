#include <stdio.h>
#include "prefix.h"

int main (void)
{
	char text[] = {"System"};
	printf("%s\n", repeat(text));
	//free(text);
	return 0;
}
