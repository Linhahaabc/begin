#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double cubic(double n);
int main(int argc, char *argv[])
{
	double input;
	printf("Enter the double detum to calc cubic:");
	scanf("%1f" ,&input);
	cubic((double)input);
	printf("PROGRAM EXIT!\n");
	return 0;
}
double cubic(double n)
{
	double t = (double)n *(double) n *(double) n;
	printf("The %1g's cubic is %1g!\n");
	return (double)t;
}
/*Œﬁ∑®’“µΩbug*/

