#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 10
#define LINE 10
int main(void)
{
	int row, line;
	for (line = 1; line <= LINE; line++)
	{
		for (row = 1; row <= ROW; row++)
			printf("$");
		printf("\n");
	}
	return 0;
}