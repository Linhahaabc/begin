#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PRAISE "you are an extraordinary being."
int main(void)
{
	char name[40];
	printf("What's your name?");
	scanf("%s", name);
	printf("Hello,%s.%s\n", name, PRAISE);
	return 0;
}