#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*复合函数的用法*/
void haha(int n);
int main(void)
{
	int a = 6;
	char b = '?';
	float c = 6.33;

	haha(a);
	haha(b);
	haha(c);
	return 0;
}
void haha(int n)
{
	while (n-- > 0)
	{
		printf("#");
	}
	printf("\n");
	
}