#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*��ʼ����*/
void one_three(void);
void two(void);
/*������*/
int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("\n");
    two();
	printf("\n");
	printf("three\n");
	printf("done\n");
	return 0;
}
/*���庯��*/
void one_three(void)
{
	printf("one");
}
void two(void)
{
	printf("two");
}
