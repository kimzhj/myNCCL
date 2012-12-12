/********************homework_9_1.c********************/
/*用户任意输入一个字符串，判断这个字符串是否为“回文”(回文即按正反顺序读都一样)。例如 “abcba” 就是回文。*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int flag,length;
	int i;

	printf("Plase input a String :");
	scanf("%s",str);

	length = strlen(str);
	flag = 0;

	for(i = 0; i < length/2; i++)
	{
		if(str[i] == str[length-(i+1)])
			flag = 1;	  	
	}

	if(flag == 0)
		printf("You enter the string %s is not a palindrome.\n",str);
	else
		printf("Your input string %s is palindrome.\n",str);

	return 0;
	
}


/********************homework_9_2.c********************/
/*使用字符数组实现基于数字字符串的加减法。例如"123" + "45" = "168" , "456"-"13"="443"。*/

#include<stdio.h>
#include<string.h>
#include<math.h>

void add(char fir_str[], char sec_str[])
{
	int i,fir_len,sec_len;
	long a = 0,b = 0;

	fir_len = strlen(fir_str);
	sec_len = strlen(sec_str);

	for(i = 0; i < fir_len; i++)
		a += ((fir_str[i] - 48) * pow(10,fir_len - i - 1));


	for(i = 0; i < sec_len; i++)
		b += ((sec_str[i] - 48) * pow(10,sec_len - i - 1));
	
	printf("%ld + %ld = %ld",a, b, a + b);
}
int  main(void)
{
	char fir_str[200],sec_str[200];
	

	printf("Please enter a numeric string to fir_str:");
	gets(fir_str);

	printf("Please enter a numeric string to sec_str:");
	gets(sec_str);

	add(fir_str,sec_str);

	printf("\n");

	return 0;
}


/********************homework_9_3.c********************/
/*编写一个去字符串多余空格的的程序，将连续的多个空格用一个空格代替。例如输入"abc___ab_a__c"，输出"abc ab a c"。*/

#include "stdio.h"

void remove_space(char buf[])
{
	int i, j;

	for(i = 0; buf[i]; i++)
     	{
      		if(buf[i] == 32 && buf[i + 1] == 32)
		{
      			for(j = i; buf[j]; j++) 
			{
				buf[j] = buf[j + 1];
				i = 0;
			}
		}
     	}

	return;
}
int  main(void)
{
   	char input_str[100];

	printf("Please input the string: ");
	gets(input_str);

	remove_space(input_str);

    	printf("After removing the excessive spaces: %s \n", input_str);

	return 0;
}

