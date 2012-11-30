#include <stdio.h>
int main(void)
{
  int counter;

  printf("hello,NCCL!\n");
  
  counter=10;
  do
  {
    printf("counter=%d\n",counter);
    counter--;
  }while(counter>=0);
  
  return 0;
}

