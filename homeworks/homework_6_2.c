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
	   		printf("%d    ",i);
    	}
    	printf("\n");

    	return 0;
}

