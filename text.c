#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char input,control,first,middle;
	int line,blank,real_line;
	printf("Please enter a letter:");
	scanf("%c", &input);
	for (line = (int)input, control = 'A',real_line=1; (char)control <=(char) input; control++,real_line++)
	{
		for (blank = 1; blank <= line - 1; blank++)
		{
			printf("%c",' ');
			for (first = 'A'; (int)first <= ((int)'A' + real_line); first++)
			{
				printf("%c", first);
				for (middle = first - 1; (int)middle >= (int)'A'; middle--)
					printf("%c", middle);
			}
		}
		printf("\n");

	}
}