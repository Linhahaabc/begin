#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*printf中不同的换行方法*/
int main(void)
{
	printf("Here's a one way to");
	printf("print a long string\n");
	printf("Here's another way to\
 print a long string\n");
	printf("Here's the newest way to"
		"print a long string");
	return 0;

}