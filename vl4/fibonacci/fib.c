int fib(const unsigned int number)
{
	if(0 == number)
		return 0;
	if(1 == number)
		return 1;
	return fib(number-1) + fib(number-2);
}
