#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int age;
	float assets;
	char pet[30];
	printf("Enter your age,assets,and your fovorite pet.\n");
	scanf("%d %f", &age, &assets);
	scanf("%s", pet);
	printf("%d $%.2f %s\n ",age, assets, pet);
	return 0;
}