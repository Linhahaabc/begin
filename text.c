#define  _CRT_SECURE_NO_WARNINGS 1
/*两个函数的运用*/
#include<stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}
void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
	printf("Which nobody can deny\n");
}
