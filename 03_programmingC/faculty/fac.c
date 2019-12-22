#include "fac.h"
int fac_r(int n)
{
	if(n < 1)
		return 1;
	return n * fac_r(n - 1);
}
int fac_i(int n)
{
	int result = 1;
	for(int i = n ; i > 0; i--)
	{
		result = i * result;
	}
	return result;
}
