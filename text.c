#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a = 65537;
	long b = 1000000000;
	long long c = 1000000000000000000;
	unsigned long long d = 3000000000000;
	printf("a=%x,a=%lx\n",a,a);      /*ʮ��������65537*/
	printf("b=%ld,b=%hu\n", b, b);   /*long���÷�*/
	printf("c=%lld,c=%d\n", c, c);   /*long long���÷�*/
	printf("d=%llu,d=%hd\n", d, d);  /*unsigned���÷�*/
	return 0;
}