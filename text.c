#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*�޷������������ԭ����*/
int cubic(double n);
int main(void)
{
	double c;
	scanf("%f",&c);
	cubic((double)c);
	return 0;
}
int cubic(double n)
{
	double d;
	d = n * n * n;
	printf("%.2f", d);
	return 0;
}