#include <stdio.h>
#include "brainfuck.h"

int main(void)
{
	char helloWorld[] = {"++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.#"}; 
	interpretBrainfuck(helloWorld);
	return 0;
}
