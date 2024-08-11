#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float input[8], sum[8];
	int order;
	printf("Please enter eight number:");
	for (order = 0; order < 8; order++)
		scanf("%f", &input[order]);

	
		for (order = 0; order < 8; order++)
			printf("%.2f ", input[order]);
		printf("\n");
		sum[0] = input[0];
		printf("%.2f ", sum[0]);
		for (order = 1; order < 8; order++)
		{
			sum[order] = sum[order - 1] + input[order];
			printf("%.2f ", sum[order]);
		}
		scanf("%.2f", &input[order]);
	
	printf("\nDone!");
	return 0;
}