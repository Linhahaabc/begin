#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*½ğ×ÖËşÊı×Ö*/
int main(void)
{
	int number,line,order,line1;
	printf("Please enter a line(intger):");
	scanf("%d", &number);
	for (line ='A', order = 0, line1 = 1; line <= ('A'+number); order++)
	{
		
		for ((int)line1=(int)line; line <=(char) order + (char)line1; line++)
			printf("%c", line);
		printf("\n");
	}
	return 0;
}