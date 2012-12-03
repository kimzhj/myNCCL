/*homework_3_1.c*/
#include <stdio.h>

int main(void)
{
    int counter;

    printf("hello, NCCL!\n");

    counter =  10;
    while (counter > 0)
    {
        
        printf("counter = %d\n", counter);
        counter--;
    }

    return 0;
}



/*homework_3_2.c*/
#include <stdio.h>

int main(void)
{
    int counter;
    int sum;

    printf("hello, NCCL!\n");

    counter = 1;
    sum = 1;
    while (counter < 10)
    {
        counter++;
        sum = sum + counter;
    }
    printf("sum = %d\n", sum);

    return 0;
}



/*homework_3_2_1.c*/
#include <stdio.h>

int main(void)
{
    int counter;

    printf("hello, NCCL!\n");

    counter = 10 ;
    do
    {
        printf("counter = %d\n",counter);
        counter--;

    } while (counter > 0);

    return 0;
}




/*homework_3_2_2.c*/
#include <stdio.h>

int main(void)
{
    int counter;
    int sum;

    printf("hello, NCCL!\n");

    counter = 1;
    sum = 1;

    do
    {
        counter++;
        sum = sum + counter;

    } while (counter < 10);

    printf("sum =%d\n", sum);

    return 0;
}


/*homework_3_3.c*/
#include <stdio.h>

int main(void)
{
    int iNum = 0;

    do{
        printf("please input a positive number:\n");
        scanf("%d", &iNum);
    }while(iNum < 0);

    while (iNum != 0)
    {
        printf("%d, ", iNum % 10);
        iNum /= 10;
    }

    printf("\n");

    return 0;
}


