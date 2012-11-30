#include<stdio.h>
#include<time.h>

int main(void)
{
  int iNum_A;
  int iNum_B;
  srand((unsigned)time(NULL)); //Not very understand, Online query.
  iNum_A = =rand();

  printf("Please input iNum_A=%d\n",iNum_A);
  do
  {
    printf("Please input iNum_B: ");
    scanf("%d",&iNum_B);

    if(iNum_B != iNum_A)
    {
      if(iNum_B > iNum_A)
         printf("You input number is big\n");
      else
         printf("You input number is small\n");
    }
    else
      break;
  }while(iNum_B != 0);
  printf("Congratulations,guessed right ! iNum_B=%d\n",iNum_B);
  return 0;
}
