#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define change 60
/*分钟数转换为秒数与小时数*/
int main(void)
{
	int minutes,seconds;
	double hours;
	printf("Please enter a number(minutes)\n");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		seconds = minutes * change;
		hours = minutes / change;
		printf("%d minutes is %d seconds or %.4f hours\n", minutes, seconds, hours);
		printf("Please enter a number(minutes)\n");
		scanf("%d", &minutes);
	}
	return 0;
}