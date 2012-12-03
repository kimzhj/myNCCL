#include<stdio.h>
int main()
{
  int day=4;
  int moth=30;
  int i;
  
  printf("一   二   三   四   五   六   日");
  for(i=0;i<day+moth;i++)
  {
     if(i%7==0)
       printf("\n");
     if(i>=day)
       printf("%2d   ",i-day+1);
     else
       printf("     ");
  }
  printf("\n");
}
