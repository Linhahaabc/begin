#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int group[8], order, number;
	int input = 2;
	for (order = 0, number = 1; order < 8;order++)
	{
		number *= 2;
		group[order] = number;
	}
	order = 0;
	do {
		printf("%d ", group[order]);
		order++;
	} while (order < 8);
	return 0;

}