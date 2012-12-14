/****************homework_10_1.c******************/
/*增加一个变量，用来统计算法执行过程中比较的次数。*/

#include <stdio.h>

#define ALL_NUM     100
#define COUNT_NUM   3
#define OUT_NUM     3

/* people id array such as (1,2,3,4,5,6) */
int people[ALL_NUM];

int main(void)
{
    int left;   /* left people number */
    int pos;    /* which pos */
    int step;   /* which step */
    int i;

    int counter = 0;
    int num = 0;

    left = ALL_NUM;
    pos = 0;
    step = 0;

    /* init id as 1,2,3,4,5,6 */
    for (i = 0; i < ALL_NUM; i++)
        people[i] = i + 1;

    /* if there is still people in queue */
    while (left > 0)
    {
        /* pos++?  step++?   left--? */
        if (people[pos] > 0)
            step++;
	num++;

        if (step == OUT_NUM && people[pos] != 0)
        {
            printf("%d out \n", people[pos]);
            people[pos] = 0;
            left--;   
        }
	 num +=2;

    #if 1
        pos = ++pos % ALL_NUM;
        step = step % COUNT_NUM;
    #else   
        pos++;
        if (pos == ALL_NUM)
            pos = 0;
	num++;

        if (step == COUNT_NUM)
            step = 0;
	num++;
    #endif
    }

    printf("执行过程中比较的次数: %d\n",num);

    return 0;
}



/****************homework_10_2.c******************/
/*已知2012年1月1日是星期日，请打印出全年的月历。*/
#include <stdio.h>

#define MONTH_AMOUNT  12

void print_month(int first_day, int day_amount)
{
	int i;

	printf (" SUN MON TUE WED THU FRI SAT");

	for (i = 0; i < day_amount + first_day; i++)
	{
		if (i%7 == 0)
			printf("\n");

		if (i < first_day)
			printf("    ");
		else 
			printf(" %2d ", i-first_day +1);
	}

	printf ("\n");
}

int main(void)
{

	int day_amount[MONTH_AMOUNT] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char month_name[][MONTH_AMOUNT] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int i, sum_day = 1;

	for (i = 0; i < MONTH_AMOUNT; i++)
	{
		printf(" ============%s============\n", month_name[i]);
		print_month((sum_day-1)%7, day_amount[i]);
		printf("\n");

		sum_day += day_amount[i];
	}

	return 0;
}


/****************homework_10_3.c******************/
/*用户输入10个数字，进行排序，要求把所有奇数排前面，所有偶数排后面。*/
#include <stdio.h>

#define NUM_AMOUNT  10

#define SWAP(a, b) {a = a + b; b = a - b; a = a - b;}

void sort(int num[NUM_AMOUNT])
{
	int pos_odd, pos_even;

	pos_odd = 0; 
	pos_even = NUM_AMOUNT -1;

	while (pos_odd < pos_even)
	{
		if (num[pos_odd]%2 ==0 && num[pos_even] != 0)
		{
			SWAP(num[pos_odd], num[pos_even]);
			pos_even--;
			pos_odd++;
		}

		if (num[pos_odd]%2 != 0)
			pos_odd++;

		if (num[pos_even]%2 == 0)
			pos_even--;
	}
}

int main(void)
{
	int num[NUM_AMOUNT];
	int i;

	printf ("Please input %d number:", NUM_AMOUNT);
	for (i = 0; i < NUM_AMOUNT; i++)
		scanf("%d", &num[i]);

	sort(num);
	printf("After sort:");
	for (i = 0; i < NUM_AMOUNT; i++)
		printf("%d, ", num[i]);
	printf("\n");

	return 0;
}
