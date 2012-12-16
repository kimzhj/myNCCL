/******************homework_5_3.c********************/
/*输入5个数，计算平均数,并打印*/

#include<stdio.h>

int main()
{
	int sum = 0;
	int num;
	int i;

	for(i = 1; i <= 5; i++)
	{
    		printf("Please input %d number:",i);
    		scanf("%d",&num);
    
    		sum += num;
  	}

  	printf("sum=%d\n",sum);

}



/******************homework_5_2.c********************/
/*输入5个数，找出最大的数，并打印*/

#include<stdio.h>

int main()
{
  	int num[5];
  	int max;
  	int i,j;
  
  	j=1;
  
  	for(i = 0; i < 5; i++)
  	{
    		printf("Please input %d number:",j++);
    		scanf("%d",&num[i]);
  	}

  	max = num[0];

  	for(i = 0; i < 5; i++)
  	{
    		if(num[i] > max)
      		max = num[i];
  	}

  	printf("You input max number is %d\n",max);
}




/******************homework_5_3.c********************/
/*已知11月1日星期四，打印出11月份的月历*/
#include <stdio.h>

int main(void)
{
	int first_day = 4;
	int day_amount = 30;
	int i;

	printf (" 日  一  二  三  四  五  六 ");

	for (i=0; i<day_amount+first_day; i++)
	{
		if (i%7 == 0)
			printf("\n");

		if (i < first_day)
			printf("    ");
		else 
			printf(" %2d ", i-first_day+1);
	}

	printf ("\n");

	return 0;
}
/*****************************************************************
 日  一  二  三  四  五  六 
                  1   2   3 
  4   5   6   7   8   9  10 
 11  12  13  14  15  16  17 
 18  19  20  21  22  23  24 
 25  26  27  28  29  30 
******************************************************************/
