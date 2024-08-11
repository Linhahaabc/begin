#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	double  wage = 1.0e6;
	int year;
	for (year = 1; wage >= 0; year++)
	{
		wage *= 1.08;
		wage = wage - 1.0e5;
	}
	printf("%d years later,the wage will be used up",year);
	return 0;
}