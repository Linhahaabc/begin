#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define BOOK "War and Peace"
int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for %.2f.\n", BOOK, cost);
	printf("That is %.f%% of list.", percent);
	return 0;
}
