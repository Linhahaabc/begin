#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int friend = 5;
	int week,add_friend;
	printf("week  added friend    total friend \n");
	for (week = 1; friend <= 150; week++)
	{
		add_friend = friend - 1;
		friend =friend-1+ add_friend;
		printf("%4d %13d %15d\n", week, add_friend,friend);
	}
	printf("Done!");
	return 0;
}	