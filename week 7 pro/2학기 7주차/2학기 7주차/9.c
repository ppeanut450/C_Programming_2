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
		{ "¥���", 800 },
		{ "�ڸ����̵�", 150 },
		{ "ũ����", 400 } };

	for (i = 0; i < 3; i++)
	{
		sum += food_array[i].calories;
	}
	printf("�� Į�θ�=%d", sum);
}