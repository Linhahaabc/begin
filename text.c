#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	printf("��֪һ����Ϊ950�ˣ����ڼ���ˮ���ӵ�����\n");
	printf("������ˮ���ӵĿ�����");
	float a,b;
	printf("_______\b\b\b\b\b\b");
	scanf("%f",&a);
	b = a / 950 / 3.0e-30;
	printf("%.2f����ˮ��%eˮ����\n", a, b);
	return 0;

}