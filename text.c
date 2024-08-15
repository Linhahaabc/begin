#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdbool.h>
#include<ctype.h>
#include<stdio.h>
int main(void)
{
	char input;
	char stop = "|";
	int num = 0;
	int word = 0;
	int line = 0;
	int pun = 0;
	bool judge = true;
	printf("Please enter some letter(use | to stop):\n");
	while ((scanf("%s", &input)) != stop)
	{
		num++;
		if (isalnum(input) && judge)
		{
			word++;
			judge = false;
		}

		if (!isalnum(input) && !judge)
		{
			pun++;
			judge = true;
		}
		if (input = '\n')
			line++;

	}
	printf("There are %d letters,%d words,%d punctuations,%d lines.\n", num, word, pun, line);
	printf("Done!\n");
	return 0;
}