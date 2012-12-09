/*homework_8_1.c*/
#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
	int i;
	int tmp;

	tmp = (int)sqrt(num);
	
	for (i = 2; i <= tmp; i++)
	{
		if (num % i == 0)
			break ;
	}

	if (i == tmp + 1)
		return num;
	else
		return 0;
}

int main(void)
{
	int begin = 2;
	int end   = 100;
	int max_prime;
	int i;

	for (i = begin; i < end; i++)
	{
		int tmp_prime = is_prime(i);

		if (tmp_prime != 0)
			max_prime = tmp_prime;
		
	}

	printf("1-100 less than the largest prime number: %4d\n",max_prime);	

}



/*homework_8_2.c*/
#include <stdio.h>

int compare(int fir_num, int sec_num)
{
	if (fir_num == sec_num)
		return 1;
	else
		return 0;
}

int main(void)
{
	int fir_num, sec_num;
	int counter,tmp;

	counter = 0;

	printf ("Please input first number:");
	scanf ("%d", &fir_num);
	printf ("Please input second number:");
	scanf ("%d", &sec_num);

	while (fir_num != 0 && sec_num != 0)
	{
		tmp = compare(fir_num % 10, sec_num % 10);

		if (tmp == 1)
			counter++;

		fir_num /= 10;
		sec_num /= 10;
	}
	
	printf ("Two figures position the same figures have the same number: %d\n",counter);

}
