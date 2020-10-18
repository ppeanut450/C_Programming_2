#include <stdio.h>

struct food
{
	char name[100];
	int calories;
};

int main(void)
{
	int i, sum = 0;

	struct food food_array[3] = { 
		{ "짜장면", 800 }, 
		{ "자몽에이드", 150 }, 
		{ "크로플", 400 } };

	for (i = 0; i < 3; i++)
	{
		sum += food_array[i].calories;
	}
	printf("총 칼로리=%d", sum);
}