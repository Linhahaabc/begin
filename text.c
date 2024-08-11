#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(void)
{
	int max, min;
	long num,squ,sum;
	printf("Please enter a number as the minimin and maximun value:");
	scanf("%d %d", &min,&max);
	
	while (min <= max)
	{
		for (num = min,sum=0; num <= max; num++)
		{
			squ = num * num;
			sum += squ;
		}
		printf("the sum is %ld\n", sum);
		printf("Please enter a number as the minimin and maximun value:");
		scanf("%d %d", &min, &max);

	}
	printf("Done!");
	return 0;

}