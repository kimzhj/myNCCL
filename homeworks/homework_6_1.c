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
