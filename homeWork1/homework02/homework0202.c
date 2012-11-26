
/*
* output:
	address   --- 00423168
	address+1   --- 0042316c
  conclusion:µØÖ·²îÎª4
*/


#include <stdio.h>

int   global	= 123;

int main(void)
{
	printf("address   --- %p\n", &global);
	printf("address+1 --- %p\n", &global+1);
	
	return 0;
}