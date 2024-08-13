#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	long input;
	long num1, num2;
	int judge = 1;

	printf("Please enter a number:");
	while (scanf("%ld", &input) == 1)
	{

		for (num1 = 2; (num1 * num1) <= input; num1++)
		{
			if ((input % num1) == 0)
			{
				if (num1 * num1 == input)
					printf("%ld is divisible by %ld\n", input, num1);
				else
				{
					num2 = input / num1;
					printf("%ld is divisible by %ld and %ld\n", input, num1, num2);
				}
				judge = 0;
			}

			
		}

		if (judge)
		{
			printf("%ld is prime\n", input);
			
		}
		printf("Please enter a number:");
	}
	printf("Done!\n");
	return 0;
}