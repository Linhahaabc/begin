#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	const int row = 10;
	const int line = 10;
	int rows, lines;
	for (rows = 0; rows <= row; rows++)
	{
		for (lines = ('A'+rows); lines <= ('A' + row); lines++)

			printf("%c", lines);

		printf("\n");
	}

	return 0;
}