#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int line,real_line,real_row;
	printf("Please enter a intger:");
	scanf("%d", &line);
	for (real_line = 1; real_line <= line; real_line++)
	{
		for (real_row = real_line; real_row >= 1; real_row--)
			printf("$");
		printf("\n");
	}
	return 0;
	
}