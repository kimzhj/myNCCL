/*homework_6_1.c*/
#include<stdio.h>

int main(void)
{
	int i,j;
	int x,y;

	x = 0;
	y = 0;

	do
	{
		for(i = 1;i <= 5;i++)
		{
			for(j = 1;j <= 5;j++)
			{
				if(x == i && y == j)
					printf("1  ");
				else
					printf("0  ");
			}
			printf("\n");
		}
		printf("\n");

		/*Input line number*/
        	printf("Please enter an integer between 1 to 5,X:");
		scanf("%d",&x);

		/*Input number of columns*/
		printf("Please enter an integer between 1 to 5,Y:");
		scanf("%d",&y);
	}
	while(1);

	return 0;
}


/*homework_6_2.c*/
#include<stdio.h>

int main(void)
{ 
	int i,j;
	int sum;

   	printf("满足条件的数有:");

  	for(i = 1;i <= 1000;i++)
  	{ 
     		sum = 0;

		for(j = 1;j < i;j++)
   		{ 
	   		if(i%j == 0)
	      			sum += j;
        	}
 
		if(i == sum)
	   		printf("%d   ",i);
    	}
    	printf("\n");

    	return 0;
}


/*homework_6_3.c*/
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
