#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define change 1000
int main(void)
{
	int quantity,can;
	
	
	printf("Please enter a number as quantities:");
	while ((scanf("%d", &quantity) )== 1)
	{
		can = 0;
		can = quantity / change;
		can += (quantity % change == 0) ? 0 : 1;
		printf("%d should use %d %s.",quantity,can,can==1?"can":"cans");


	}
	return 0;
}