int checkIsbn(char* c)
{
	if(getLength(c) != 10)
		return -1;
	if(getSum(c) % 11 != 0)
		return -1;
	return 0;
}

int getLength(char* c)
{
	int length;
	for(length = 0; c[length] != '\0'; length++);
	return length;
}

int getSum(char* c)
{
	int result = 0;
	for(int i = 10; i >= 1; i--)
		result += i * (c[i-1] - '0');
	return result;
}
