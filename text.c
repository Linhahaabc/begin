#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	const int FLRST_OZ = 46;
	const int NEXT_OZ = 20;
	int ounces, cost;

	printf("   onces  cost\n");
	for (ounces = 1, cost = FLRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
	{
		printf("%5d    $%4.2f\n", ounces, cost / 100.0);
	}
	return 0;
}
