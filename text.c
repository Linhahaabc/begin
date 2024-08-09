#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define row 10
#define line 10
int main(void)
{
	char lines;
	int rows;
	for (rows  = 1; rows <= row; rows++)
	{
		for (lines='A'; lines <= ('D'+line); lines++)
			printf("%c", lines);
		printf("\n");
		
	}
	return 0;
	

}