#include <stdio.h>
int main(void)
{
	int x, y, sum = 0, i;
	

	printf("시작 정수: ");
	scanf_s("%d", &x);

	printf("종료 정수: ");
	scanf_s("%d", &y);

	for (i = x; i <= y; i++) {
		sum += i;
	}

	printf("Sum of %d to %d = %d", x, y, sum);

	return 0;
}