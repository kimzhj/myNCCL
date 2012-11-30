#include<stdio.h>

int main(void)
{
  int num;

  printf("Please input a number :\n");
  scanf("%d",&num);

  while(num != 0)
  { 
    printf("%d , ",num%10);
    num = num/10;
  }

  printf("\n");

  return 0;
}
