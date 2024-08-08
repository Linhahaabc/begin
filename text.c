#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int line,cubic,max_line;
	max_line = 10;

	printf(" line  num cubic\n");
	for (line = 1; line <= max_line; line++)
	{
		
		
		cubic = line * line* line;
		printf("%5d %5d %5d\n", line,line,cubic);

	}
	printf("Done!");
	return 0;


}

