#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void ix(void);
int main(void)
{
	ix(), ix(), ix();
	printf("\n");
	ix(), ix();
	printf("\n");
	ix();
	return 0;
}
void ix(void)
{
	printf("smile!");
}