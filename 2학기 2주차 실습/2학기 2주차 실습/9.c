#include <stdio.h>
int main(void)
{
	int num, ber, result = 0;

	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	ber = num;

	while (ber > 0) {
		result += ber % 10;
		result *= 10;
		ber /= 10;
	}

	result /= 10;

	if (num == result)
		printf("%d은 회문숫자입니다.", num);

	else
		printf("%d은 회문숫자가 아닙니다.", num);

	return 0;
}