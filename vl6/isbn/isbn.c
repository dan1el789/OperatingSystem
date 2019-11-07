int checkIsbn(char* c)
{
	return -1;
}

int checkLength(char* c)
{
	int length;
	for(length = 0; c[length] != '\0'; length++);
	return length - 9;
}
