#include <stdio.h>
int prime(int x, int y)
{
	int i, j, count = 0;

	printf("�Ҽ�: ");
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

	printf("�� ������ ũ�� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	printf("\n�Ҽ� ����: %d", prime(x, y));
}