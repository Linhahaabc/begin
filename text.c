#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int n, x;
	printf("Enter a intger:");
	scanf("%d",&n);
	for (x = 4; n <= 100000000; n = x * n);
	printf("%d", n);
	return 0;
	

	
}