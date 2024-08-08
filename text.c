#define  _CRT_SECURE_NO_WARNINGS 1
#define FORCE 1
#include<stdio.h>
int main(void)
{
	int first, second;
	scanf("%d", &second);
	scanf("%d", &first);
	while (first > 0)
	{
		printf("%d %% %d is %d\n", first, second, first % second);
		scanf("%d",&first);


	}
	printf("done!\n");
	return 0;
}

