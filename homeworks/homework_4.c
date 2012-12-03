/*homemwork_4_1.c*/
#include <stdio.h>

int main(void)

{
	int inum_a,inum_b;

	printf("Input the inum_a number:");
	scanf("%d",&inum_a);

	printf("Input the inum_b number:");
	scanf("%d",&inum_b);

	while ( inum_a != inum_b)  
	{
		if ( inum_a > nium_b)
		{
			printf("inum_b %d less than inum_a,pls input again:", inum_b);
			scanf("%d",&inum_b);
		}
		else{
			printf("inum_b %d more than inum_a,pls input again:", inum_b);
			scanf("%d",&inum_b);
		}

	} 

	printf("Oh,Yeah,U get it inum_b %d\n", inum_b);

	return 0;
}

/*homework_4_2.c*/

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int inum_a,inum_b;

	inum_a = irand();

	printf("inum_a is %d\n", inum_a);

	printf("Input the num_b number:");
	scanf("%d",&inum_b);

	while ( inum_a != inum_b)
	{
		if ( inum_a > inum_b)
		{
			printf("inum_b %d is less than inum_a,pls input again", inum_b);
			scanf("%d", &inum_b);
		}
		else{
			printf("inum_b %d is more than inum_a,pls input again", inum_b);
			scanf("%d", &inum_b);

		}
	}

	return 0;
}
