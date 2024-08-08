#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*整数的平方求解*/
int cubic(int n);
int main(void)
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	cubic(num);
	return 0;
}
int cubic(int n)
{
	long int cubics;
	cubics = n* n * n;
	printf("%d's cubic is %ld", n, cubics);
	return 0;

}