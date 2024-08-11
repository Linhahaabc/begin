#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(void)
{
	char input[30];
	int length;
	printf("please enter the letter:");
	scanf("%s",&input);
	length = strlen(input) - 1;
	for (; length >= 0; length--)
		printf("%c", input[length]);
	printf("\n");
	printf("Done!");
	return 0;
	

}