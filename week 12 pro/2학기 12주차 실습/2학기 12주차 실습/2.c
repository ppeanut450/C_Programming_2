#include <stdio.h>
#define GET_MIN(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))


int main(void)
{
	int x, y, z;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &x, &y, &z);
	printf("�ּҰ��� %d�Դϴ�.\n", GET_MIN(x, y, z));
	return 0;
}