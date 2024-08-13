
#include<stdio.h>
#define a '.'
int main(void)
{
	char ch;
	int count=0;
	
	while ((ch = getchar()) != a)
	{
		if (ch != '" ' &&  ch != '\'')
			count++;

	}
	printf("There are %d letters.\n",count);
	return 0;
}

