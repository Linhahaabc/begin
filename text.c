#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>,<ctype.h>

int main(void)
{
	char ch;
	printf("Please enter some letter:");
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))

			putchar(ch + 1);
		else
			putchar(ch);
	}
	return 0;
}
	