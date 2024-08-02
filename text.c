#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*年龄转化为秒数*/
int main(void)
{
	int a;
	printf("请输入你的年龄:");
	printf("________\b\b\b\b\b\b\b\b");
	scanf("%d",&a);
	printf("你的年龄一共有%lld秒", a * 31560000);
	return 0;
	

}