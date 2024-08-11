#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int num,max, min;
	long square,cubic;
	printf("Please enter a number as the minimum value:");
	scanf("%d",&min);
	printf("\n");
	printf("Please enter a number as the maximun value:");
	scanf("%d",&max);
	printf("number     square    cubic\n");

	
	
	for (num=min; num <= max; num++)
	{
		square = num * num;
		cubic = num * num * num;
		printf("%6d %10ld %8ld\n", num, square, cubic);
	}
	
	printf("Done!\n");

	return 0;
	
}