#include <stdio.h>
int set_max_ptr(int m[], int size, int** pmax)
{
	int max = m[0];
	for (int i = 0; i < size; i++)
	{
		if (m[i] >= max)
		{
			max = m[i];
			(*pmax) = &m[i];
		}

	}

	return **pmax;
}

int main(void)
{
	int m[6] = { 5, 6, 1, 3, 7, 9 };
	int* pmax;

	printf("가장 큰 값은 %d", set_max_ptr(m, 6, &pmax));

	return 0;
}