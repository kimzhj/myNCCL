#include<stdio.h>

int main(void)
{
  int iNum_A;
  int iNum_B;

  printf("Please input iNum_A: ");
  scanf("%d",&iNum_A);
  do
  {
    printf("Please input iNum_B: ");
    scanf("%d",&iNum_B);

    if(iNum_B != iNum_A)
    {
      if(iNum_B > iNum_A)
         printf("You input number is big\n");
      else
         printf("You input number is smaill\n");
    }
    else
      break;
  }while(iNum_ != 0);
  printf("You input number is right: iNum_=%d\n",iNum_);
  return 0;
}
