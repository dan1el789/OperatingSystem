#include <stdio.h>

int main (void)
{
	for(int i = 1; i <= 10; i++)
	{
		for(int j = 1; j <= 10; j++)
		{
			printf("%i x %i = %i \n", i, j, (i * j));
		}
	}
}
