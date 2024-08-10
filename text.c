#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*指数的计算*/
long long pow(int number,int index);
int main(void)
{
	int number, index;
	printf("Please enter intgers and index:");
	while (scanf("%d %d", &number, &index) == 2)
	{
		pow(number, index);
		scanf("%d %d", &number, &index);
	}
	return 0;

}
long long pow(int number, int index)
{
	long long result,num;
	for (num = 1, result = 1; num <= index; num++)
		result = result * number;
	printf("the result is %ld", result);
	return result;

}


