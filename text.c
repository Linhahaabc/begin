#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	printf("已知一夸脱为950克，现在计算水分子的数量\n");
	printf("请输入水分子的夸脱数");
	float a,b;
	printf("_______\b\b\b\b\b\b");
	scanf("%f",&a);
	b = a / 950 / 3.0e-30;
	printf("%.2f夸脱水有%e水分子\n", a, b);
	return 0;

}