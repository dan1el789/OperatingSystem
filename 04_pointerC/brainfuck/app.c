#include <stdio.h>
#include "brainfuck.h"

int main(void)
{
	char helloWorld[] = {"++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>."}; 
//	interpretBrainfuck(helloWorld);

	char loopTest[] = {">>++++++++++++++++++++++++++++++++++++++++++++++++++++++<<+++++[>+++[>.<-]<-]"};
	interpretBrainfuck(loopTest);
	return 0;
}
