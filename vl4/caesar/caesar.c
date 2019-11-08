#include "caesar.h"
char replaceWithChar(char, int);
void decode_caesar3(char text[])
{
	decode_caeser(text, 3);
}
void decode_caeser(char text[], int mv)
{ 
	encode_caesar(text, 0 - mv);
}
void encode_caesar3(char text[])
{
	encode_caesar(text,3);
}
void encode_caesar(char text[], int mv)
{
	for(int i = 0 ; text[i] != '\0' ; i++)
	{
		text[i] = replaceWithChar(text[i], mv);
	}
}
char replaceWithChar(char c, int mv)
{

	if(c >= 'a')
	{
		return ((c % 'a') + 26 + mv) % 26 + 'a';
	}
	else
	{
		return ((c % 'A') + 26 + mv) % 26 + 'A';
	}	
}
