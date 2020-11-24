// 이중 포인터 프로그램
#include <stdio.h>
int main(void)
{
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	printf("i = %d\n", i);

	**q = 300;
	printf("i = %d\n", i);

	return 0;
}