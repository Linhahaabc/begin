#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void)
{
	char ch;
	int count=0;
	long char1 = 0;
	long words = 0;
	long line = 0;
	bool iswords = 0;

	printf("Please enter a article(use \" |\" to stop ):\n");
	while ((ch = getchar()) != STOP)
	{
		char1++;
		if (ch == '\n')
			line++;
		if (!isspace(ch) && !iswords)
		{
			words++;
			iswords = true;
		}
		if (isspace(ch) && iswords)
			iswords = false;


	}
	printf("character is %ld,words is %ld,lines is %ld.", char1, words, line);
	return 0;
}