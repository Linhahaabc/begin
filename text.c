#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*����Ĳ�ͬת��*/
int main(void)
{
	float a=6.425e+01;
	
	printf("Enter a floating - point value :%.2f\n",a);
	printf("fixed-point notition:%f\n,", a);
	printf("exponential notional:%e\n", a);
	printf("p notition:%ex\n", a);
	return 0;
}