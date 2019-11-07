void rotateLeft(char* text)
{
	char first = text[0];
	int i;
	for(i = 0; text[i] != '\0'; i++)
		text[i] = text[i+1];
	text[i-1] = first;
}
