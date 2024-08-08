#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	long num ;
	long sum = 0L;
	_Bool input_is_good;
	printf("Please enter an intger to be summed");
	printf("(q to quit):");
	input_is_good = (scanf("%ld", &num) == 1);
	while (input_is_good )
	{ 
		sum = sum + num;
		printf("Please enter an integer to be summed(q to quit£©");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("%ld", sum);
	return 0;


}