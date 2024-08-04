#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	unsigned width, precision;
	int nummer=0;
	double weight=0;
	printf("Enter a filed width:\n");
	scanf("%d",&width);
	printf("The nummer is :%-*d:\n", width, nummer);
	scanf("%d %d",&width,&precision);
	printf("Weight=%*.*f\n", width, precision, weight);
	printf("Done!");
	return 0;

}