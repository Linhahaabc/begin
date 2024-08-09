#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	double times, terms;
	double added = 1;
	printf("times   terms\n");
	
	for (times = 1, terms = 1; times <= 2.0; terms++)
	{
		printf("%.9f     %.0f\n", times, terms);
		added /= 2;
		times = times + added;
		
	}
    return 0;
}