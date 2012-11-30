#include<stdio.h>

int main()
{
   int counter;
   int sum=0;
   printf("hello,NCCL!\n");
   counter=1;
   while(counter<=10)
   {
     sum=sum+counter;
     counter++;
   }
   printf("sum=%d\n",sum);
}
