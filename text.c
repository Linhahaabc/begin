#define  _CRT_SECURE_NO_WARNINGS 1
//��������������
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
	printf("����������%d\n", allday);
	return 0;
}
