#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define a '.'
int main(void)
{
	char ch;
	int count = 0;

	while ((ch=getchar())!=a)
	{
		if(ch!='"'&&ch!='\'')
			count++;

	}
	printf("%d", count);
	return 0;
}

