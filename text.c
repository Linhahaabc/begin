#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int input[8], output[8];
	int order;
	printf("Please enter eight number:\n");
	for (order = 0; order <= 7; order++)
		scanf("%d", &input[order]);
	for (order = 0; order <= 7; order++)
		output[7 - order] = input[order];
	for (order = 0; order <= 7; order++)
		printf("%d ", output[order]);
	printf("\nDone!\n");
	return 0;

	

	

}
