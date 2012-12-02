/*homework_5_1.c*/
#include<stdio.h>
int main()
{
  int sum=0;
  int num;
  int i;
  for(i=1;i<=5;i++)
  {
    printf("Please input %d number:",i);
    scanf("%d",&num);
    
    sum+=num;
  }
  printf("sum=%d\n",sum);
}




/*homework_5_2.c*/
#include<stdio.h>

int main()
{
  int num[5];
  int max;
  int i,j;
  
  j=1;
  
  for(i=0; i<5;i++)
  {
    printf("Please input %d number:",j++);
    scanf("%d",&num[i]);
  }
  max=num[0];
  for(i=0;i<5;i++)
  {
    if(num[i]>max)
      max=num[i];
  }
  printf("You input max number is %d\n",max);
}




/*homework_5_3.c*/
#include<stdio.h>

int main()
{
  int num[5];
  int max;
  int i,j;
  
  j=1;
  
  for(i=0; i<5;i++)
  {
    printf("Please input %d number:",j++);
    scanf("%d",&num[i]);
  }
  max=num[0];
  for(i=0;i<5;i++)
  {
    if(num[i]>max)
      max=num[i];
  }
  printf("You input max number is %d\n",max);
}

