#include <stdio.h>
#define AND &&
#define OR ||
#define NOT !
#define IS ==
#define ISNOT !=
int search(int list[], int n, int key)
{
	int i = 0;
	while (i < n AND list[i] != key)
		i++;
	if (i IS n)
		return -1;
	else
		return i;
}

int main(void)
{
	int m[] = { 1, 2, 3, 4, 5, 6, 7 };
	printf("배열에서 5의 위치 = %d\n", search(m, sizeof(m) / sizeof(m[0]), 5));
	return 0;
}