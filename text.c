#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	const int b = 6;
	printf("%x %#x\n", 42, 42);
	printf("*%d**% d**% d**\n", 42,42, -42);
	printf("**%5d**%.3d**%5.3d**%05.3d\n", b, b, b, b);
	return 0;

}