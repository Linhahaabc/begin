#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*����float����޶ȵĴ���*/
int main(void)
{
/*float����Ϊ��λ��Ч����*/
	float b = 1.0e20;
	float c = 0;
	c = b + 1;
	b = c - 1;
	/*16���Ƶĵĸ���д��*/
	float d = 0x2.0p20;
	printf("b=%f,c=%f\n", b, c);
	printf("d=%llu,d=%x",d,d);
	return 0;
}