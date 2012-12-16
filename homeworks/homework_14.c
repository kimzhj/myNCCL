/****************homework_14_1.c******************/

/*打印杨辉三角形的前10行*/

#include <stdio.h>

#define N 10

int main(void)
{
	int a[N][N] = {{0}};
	int i,j;
 	for(i = 0; i < N; i++)
 	{
 		for(j = 0; j <= i; j++)
 		{
 			 if(j == 0 || i == j)
  				a[i][j] = 1;
 			 else
   				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
  		}
 	}

 	for(i = 0; i < N; i++)
 	{
		for(j = 10; j >= i; j--)
		{
  			printf("  ");
 		}

 		for(j = 0; j <= i; j++)
		{
  			printf("%4d",a[i][j]);

  			if(j == i)
   				printf("\n");
 		}
	 }

	 return 0;
}

/*输出

                         1
                       1   1
                     1   2   1
                   1   3   3   1
                 1   4   6   4   1
               1   5  10  10   5   1
             1   6  15  20  15   6   1
           1   7  21  35  35  21   7   1
         1   8  28  56  70  56  28   8   1
       1   9  36  84 126 126  84  36   9   1
*/
