#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*计算皇帝棋局放米粒的问题*/
int main(void)
{
	printf("square      grains         total       fraction of\n");
	printf("            added          grains      world total\n");
	int line;
	double every, added, totalgrains, totalworld;
	every = 1;
	line = 1;
	added = 1;
	totalgrains = 1;
	totalworld = 2e16;
	while (line < 65)
	{
		printf("%6.2d      %6.2e     %6.2e      %11.2e\n", line, added, totalgrains, totalworld);
		line = line + 1;
		added = added * 2;
		totalgrains = totalgrains + added;
		
	}
	return 0;
}


