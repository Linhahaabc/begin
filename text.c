#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*使用转义程序*/
int main(void)
{
	float salary;
	printf("\aEnter your desired monthly salary:");
	printf("$____\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year,", salary,salary*12.00);
	printf("\rGee\n");
	return 0;

}
