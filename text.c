#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*scanf中*的运用*/
int main(void)
{
	int a;
	printf("Please enter these integer:\n");
	scanf("%*d %*d %d", &a);
	printf("The last integer was %d", a);
	return 0;
}
