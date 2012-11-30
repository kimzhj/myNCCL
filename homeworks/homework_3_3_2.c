#include<stdio.h>

int main()
{
   int counter;
   int sum=0;
   printf("hello,NCCL!\n");
   counter=1;
   do
   {
     sum=sum+counter;
     counter++;
   }while(counter<=10);
   printf("sum=%d\n",sum);
}
