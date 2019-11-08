#include "static.h"
int overflow(int n)
{
	static int sum = 0;
	int result = (sum + n) / 10;
	sum = (sum + n) % 10;
	return result;
}
