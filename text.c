#define  _CRT_SECURE_NO_WARNINGS 1
//计算你年龄天数
#include<stdio.h>
int main(void)
{
	int year, month, day, allday;
	year = 0;
	month = 0;
	day = 0;
	allday = 0;
	scanf("%d %d %d", &year, &month, &day);
	allday = allday + year * 365 + month * 30 + day;
	printf("年龄天数是%d\n", allday);
	return 0;
}
