#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char NAME[10], SURNAME[10];
	float height;
	printf("Please enter your suiname and your name.\n");
	scanf("%s %s", SURNAME,NAME);
	printf("Please enter your height(cm).\n");
	scanf("%f",&height);
	printf("%s%s,you are %.2f meter tall", SURNAME, NAME, height/100);
	return 0;
	
}