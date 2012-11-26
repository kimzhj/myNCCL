
/*
* output:
  global address   --- 00422a30, 00422a34, 00422a38
  local address --- 0012ff44, 0012ff40, 0012ff3c
  conclusion:
  全局变量：地址连续递增
  局部变量：地址连续递减
*/


#include <stdio.h>

int   global1	= 123;
int   global2   = 66;
int   global3   = 85;


int main(void)
{
	int   local1	= 123;
	int   local2   = 0;
    int   local3   = 85;

	printf("global address   --- %p, %p, %p\n", &global1, &global2, &global3);
	printf("local address --- %p, %p, %p\n", &local1, &local2, &local3);
	
	return 0;
}