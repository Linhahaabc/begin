#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*每天增加一元，计算输入天数后的总数*/
int main(void)
{
	int day,days,sum;
	sum = 0;
	printf("enter a number.\n");
	scanf("%d", &day);
	days = day + 1;
	while (--days> 0)
	{
		sum = sum + days;
	}
	printf("The sum is %d\n", sum);
	printf("Done!");
	return 0;
}