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
