#define  _CRT_SECURE_NO_WARNINGS 1
/*�ຯ��������ͬ�к����ķ���*/
#include<stdio.h>
/*����ԭ��*/
void br(void);
void ic(void);
/*����*/
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
/*�����Ķ���*/
void br(void)
{
	printf("Brazil,Russia");
}
void ic(void)
{
	printf("India,China");
}