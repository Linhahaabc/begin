#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define a "Hello world!"
/*×Ö·û´®µÄ×ª»»*/
int main(void)
{
	printf("%2s\n", a);
	printf("%20s\n", a);
	printf("%20.3s\n", a);
	printf("%-20s\n", a);
	return 0;
}
