#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*����һ�����֣���ӡ֮��10������*/
int main(void)
{
	int num1,num2,num3;
	printf("Please enter a number\n");
	scanf("%d", &num1);
	num2 = num1 - 1;
	num3 = num1 + 10;
	while (num2++ < num3)
	{
		printf("%d\n", num2);
	}
		
	return 0;
}