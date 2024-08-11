#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main(void)
{
	int long cycle_index;
	double number,common,sum1,sum2;
	int num = 1;
	printf("Please enter a number as the cycle index:");
	scanf("%ld", &cycle_index);
	printf("cycle_index             sum1            sum2\n");
	for (number = 1.0, common = 1.0,sum1=0,sum2=0; number <= cycle_index; number++)
	{
		
		sum1 += common / number;
		sum2 += common / number * pow(-1,number-1);
		printf("%11ld  %15f %15f\n",num , sum1, sum2);
		num++;
	}
	printf("Done!\n");
	return 0;
}