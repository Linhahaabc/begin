#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char input[250];
	int order,num,length;
	printf("Please enter the letter(<=256):");
	order = 0;
	do {
		scanf("%c", &input[order]);
		
	} while (input[order] != '\n' && ++order);/*&& ++order ¼ÆËã¹ý³Ì*/
	for (order--; order >= 0; order--)
		printf("%c", input[order]);
	return 0;
}