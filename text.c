#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("Are you worth you weight in platinum\n");
	printf("Let's check in out\n");
	printf("Please enter you weight in pound:");
	scanf("%f",&weight);
	value = 1700 * weight * 14.5833;
	printf("You weight in platinum is worth $%f\n",value);
	printf("You are easliy worthn that,If platinum prices drop,\n");
	printf("eat more to maintain you value\n");
	return 0; 



}