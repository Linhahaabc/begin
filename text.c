#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	double sum1, sum2;
	sum1 = sum2 =100.0;
	int year = 1;
	while (sum1 >= sum2)
	{
		sum1 += 100.0 * 0.1;
		sum2 += sum2 * 0.05;
		year++;
		printf("%f   %f\n", sum1, sum2);
	}
	printf("%d years later,%0.2f   %0.2f", year, sum1, sum2);
	
	return 0;
}