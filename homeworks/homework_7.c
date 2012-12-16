/*homework_7_1.c*/
/*5*5 的棋盘，用户输入两个位置坐标，统计这两个位置之间有多少个子？(按从左向右的顺序数)*/
#include<stdio.h>

int main(void)
{
	int i,j;
	int fir_row,fir_col,sec_row,sec_col;
	int counter,status;

        printf("Please enter an integer between 0 to 4,X:");
        scanf("%d",&fir_row);

	printf("Please enter an integer between 0 to 4,Y:");
        scanf("%d",&fir_col);

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(fir_row == i && fir_col == j)
				printf("1  ");
			else
				printf("0  ");
		}
		printf("\n");
	}
	printf("\n");

	printf("Please enter an integer between 0 to 4,X:");
        scanf("%d",&sec_row);

	printf("Please enter an integer between 0 to 4,Y:");
        scanf("%d",&sec_col);

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(sec_row == i && sec_col == j)
				printf("1  ");
			else
				printf("0  ");
		}
		printf("\n");
	}
	printf("\n");

	counter = 0;
	status = 0;
	for(i = 0; i < 5; i++)
	{
		if(i < fir_row)
			continue;
		for(j = 0; j < 5; j++)
		{
			if(sec_row == i && sec_col == j)
				status = -1;

			if(status == 1)
				counter++;
	
			if(fir_row == i && fir_col == j)
				status = 1;	 
		}
		if(status == -1)
			break;
	}
	printf("(%d, %d) 到 (%d, %d) 之间有 %d 个子\n",fir_row,fir_col,sec_row,sec_col,counter);	

	return 0;	
}


/*homework_7_2.c*/
/*在上图所示的棋盘中，用户任意输入一个位置，放置国际象棋中的皇后，请输出所有皇后能够吃到的位置。*/

#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,j;
	int x,y;

        printf("Please enter an integer between 0 to 4,X:");
        scanf("%d",&x);

	printf("Please enter an integer between 0 to 4,Y:");
        scanf("%d",&y);

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(x == i && y == j)
				printf("1  ");
			else
				printf("0  ");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("皇后能够吃到的位置:\n");

	for(i = 0; i < 5; i++)
        {       
                for(j = 0; j < 5; j++)
                {       
			if((x == i) && (y == j))
                                continue;

			if((x == i) || (y == j))
				printf("(%d,%d)",i,j);

                        if(abs(x-i) == abs(y-j))
                                printf("(%d,%d)",i,j);
                 }
         }
	printf("\n");

	return 0;
}


