#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	long long input,divide1,divide2;
	bool isPrime;
	printf("Please enter a number:");
	
	while (scanf("%lld", &input)==1)
	{
		for (divide1 = 2,isPrime=true; divide1 * divide1 <= input; divide1++)
		{
			if((input%divide1)==0)
			{
				if (divide1 * divide1 != input)
				{
					divide2 = input / divide1;
					printf("%lld is divisiable by %lld and %lld\n", input, divide1, divide2);
				}
				else
					printf("%lld is divisiable by %lld \n", input, divide1);

				isPrime = false;
			}
			
			
			
			
		}
		if (isPrime)
			printf("%lld is prime.\n", input);
		printf("Please enter a number:");
		
	}
	printf("Done!\n");
	return 0;
}
