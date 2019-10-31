#include <stdio.h>
#include "caesar.h"
#include <string.h>
int main (void)
{
	printf("decode: ");
	char text[100];
	scanf("%s", text);
	encode_caesar3(text);
	printf("encode: %s \n", text);
	decode_caesar3(text);
	printf("output: %s \n", text);
}
