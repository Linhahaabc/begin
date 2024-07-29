#define  _CRT_SECURE_NO_WARNINGS 1
/*多函数运用与同行函数的分行*/
#include<stdio.h>
/*函数原型*/
void br(void);
void ic(void);
/*内容*/
int main(void)
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	return 0;
	
}
/*函数的定义*/
void br(void)
{
	printf("Brazil,Russia");
}
void ic(void)
{
	printf("India,China");
}