#include<stdio.h>
int main(void)
{
	int a,b,c;
        int i;

	printf("三位数的水仙花数有:");

	for(i = 100;i < 1000;i++)
	{
		a = i/100;
		b = i/10-a*10;
		c = i-a*100-b*10;
		
		if(a*a*a + b*b*b + c*c*c == i)
			printf("%d   ",i);
	}
	printf("\n");

	return 0;
}
