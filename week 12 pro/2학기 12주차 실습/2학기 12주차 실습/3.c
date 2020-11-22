#include <stdio.h>
#define ARRAY_INIT(array, size, value) {int i; for (i = 0; i < size; i++) array[i] = value; }

int main(void)
{
	int array[10];
	int size = 10, value, i;

	printf("지정할 값: ");
	scanf_s("%d", &value);

	ARRAY_INIT(array, size, value);
	printf("[ ");
	for (i = 0; i < 10; i++)
		printf("%d ", array[i]);
	printf("]");

	return 0;

}