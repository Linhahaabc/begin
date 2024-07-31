#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*超出float最大限度的错误*/
int main(void)
{
/*float精度为六位有效数字*/
	float b = 1.0e20;
	float c = 0;
	c = b + 1;
	b = c - 1;
	/*16进制的的浮点写法*/
	float d = 0x2.0p20;
	printf("b=%f,c=%f\n", b, c);
	printf("d=%llu,d=%x",d,d);
	return 0;
}