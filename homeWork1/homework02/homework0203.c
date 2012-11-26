
/*
* output:
  global address   --- 00422a30, 00422a32, 00422a34
  global address+1   --- 00422a31, 00422a34, 00422a38
  local address --- 0012ff44, 0012ff40, 0012ff3c
  conclusion:
  全局变量：变量的初始地址和前一个地址与变量本身的类型有关
  地址加+1：为本变量的初始地址+偏移量  偏移量与变量的类型有关
*/


#include <stdio.h>

char   global1	= 'z';
short   global2   = 66;
double   global3   = 85.5;


int main(void)
{
	int   local1	= 123;
	int   local2   = 0;
    int   local3   = 85;

	printf("global address   --- %p, %p, %p\n", &global1, &global2, &global3);
	printf("global address+1   --- %p, %p, %p\n", &global1+1, &global2+1, &global3+1);
	printf("local address --- %p, %p, %p\n", &local1, &local2, &local3);
	
	return 0;
}