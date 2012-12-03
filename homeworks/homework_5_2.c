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

