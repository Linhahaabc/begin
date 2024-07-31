#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<inttypes.h>
/*可移植整数类型名*/
int main(void)
{
	int32_t ak;
	printf("请输入八位数字\n");
	scanf("%ld", &ak);
	printf("ak=%"PRId32"\n", ak);
	printf("\"a\\is a backslash.\"\n");
	return 0;

}
