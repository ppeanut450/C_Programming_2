#include <stdio.h>
#include "power.h"
int main(void)
{
	int x, y;
	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	printf("y�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &y);
	printf("%d�� %d �������� %f\n", x, y, power(x, y));
	return 0;
}