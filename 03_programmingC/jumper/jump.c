#include "jump.h"
int jump(int data[], int size)
{
	//int size = 5; //sizeof(data) / sizeof(int *) ;
	int jumps = 0;
	int k = 0;

	while(0 <= k && k < size)
	{
		if(data[k] == 0)
			return -1;
		int oldk = k;
		k = k + data[k]; 
		data[oldk] = 0;
		jumps++;
	}
	return jumps;	
}
