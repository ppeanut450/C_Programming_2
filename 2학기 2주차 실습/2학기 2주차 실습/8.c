#include <stdio.h>
int main(void)
{
	int num, d, sum = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	d = num - 1;
	while (d >= 1) {
		if (num % d == 0) {
			sum += d;
		}
		d--;
	}

	if (sum == num)
		printf("%d��(��) �������Դϴ�.", num);

	else
		printf("%d��(��) �������� �ƴմϴ�.", num);

	return 0;
}