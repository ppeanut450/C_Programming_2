#include <stdio.h>
int main(void)
{
	int num, ber, result = 0;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	ber = num;

	while (ber > 0) {
		result += ber % 10;
		result *= 10;
		ber /= 10;
	}

	result /= 10;

	if (num == result)
		printf("%d�� ȸ�������Դϴ�.", num);

	else
		printf("%d�� ȸ�����ڰ� �ƴմϴ�.", num);

	return 0;
}