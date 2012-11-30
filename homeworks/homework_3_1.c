#include <stdio.h>
int main(void)
{
  int counter;

  printf("hello,NCCL!\n");
  
  counter=10;
  while(counter>=0)
  {
    printf("counter=%d\n",counter);
    counter--;
  }
  
  return 0;
}
