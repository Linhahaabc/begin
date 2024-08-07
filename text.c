#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[10], surname[10];
	printf("Please enter your surname and name\n");
	scanf("%s ",surname);
	scanf("%s", name);
    printf("%*s %*s\n", strlen(surname),surname, strlen(name),name);
	printf("%*zd %*zd\n", strlen(surname), strlen(surname), strlen(name), strlen(name));
	
	return 0;
}