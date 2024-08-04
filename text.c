#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char NAME[20],SURNAME[20];
	
	printf("请输入你的名和姓\n");
	scanf("%s %s", NAME, SURNAME);
	printf("%s,%s\n", NAME, SURNAME);
	return 0;
}