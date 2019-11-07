#include <stdio.h>
#include "rotate.h"
int main(void)
{
	char text[] = "Hello";
	rotateLeft(text);
	printf("%s\n", text);
	return 0;
}
