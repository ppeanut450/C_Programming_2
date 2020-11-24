#include <stdio.h>
#define ROWS 3
#define COLS 6
int get_sum(int array[], int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
		sum += array[i];

	return sum;
}

int main(void)
{
	int m[ROWS][COLS] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18 };

	printf("2차원 m 배열 정수의 합 = %d", get_sum(m[0], ROWS * COLS));

	return 0;
}