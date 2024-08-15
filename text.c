#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 100.0
#define MIN 0.0
int main(void)
{
	float min = MIN;
	float max = MAX;
	float total = 0.0;
	float score;
	int n=0;

	printf("Please enter a number as your score(q to quit):");
	while ((scanf("%f", &score)) == 1)
	{
		if (score <= MIN || score >= MAX)
		{
			printf("Your input is invaild\n");
			printf("Please enter a number as your score(q to quit):");
			continue;
		}

		n++;
		total += score;
		min = (score < max) ? score : max;
		max = (score > min) ? score : min;
		printf("Please enter a number as your score(q to quit):");

	}
	printf("The max score is %0.2f,min score is %0.2f.\n ", max, min);
	printf("The total turn is %d,the total score is %0.2f,score per turn is %0.2f\n", n, total, total / n);
	printf("Done!\n");
	return 0;
	
}