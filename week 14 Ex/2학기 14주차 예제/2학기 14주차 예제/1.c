#include <stdio.h>
int prime(int x, int y)
{
	int i, j, count = 0;

	printf("소수: ");
	for (i = x; i <= y; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if(i % j == 0)
				break;
		}

		if (i == j)
		{
			printf("%d ", i);
			count++;
		}

	}
	return count;
}

int main(void)
{
	int x, y;

	printf("두 정수를 크기 순으로 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	printf("\n소수 개수: %d", prime(x, y));
}