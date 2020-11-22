#include <stdio.h>
#define GET_MIN(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))


int main(void)
{
	int x, y, z;
	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &x, &y, &z);
	printf("최소값은 %d입니다.\n", GET_MIN(x, y, z));
	return 0;
}