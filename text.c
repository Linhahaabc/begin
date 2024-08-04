#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*不同长度数字宽度一致*/
int main(void)
{
	printf("%9d %9d %9d\n", 30, 70, 60);
	printf("%9d %9d %9d\n", 30000, 70000, 60000);
	printf("%9d %9d %9d\n", 305165, 7013, 60653);
	printf("%-9d %-9d %-9d\n", 30, 70, 60);
	printf("%-9d %-9d %-9d\n", 30000, 70000, 60000);
	printf("%-9d %-9d %-9d\n", 30153, 7025, 60566);
	return 0;
}