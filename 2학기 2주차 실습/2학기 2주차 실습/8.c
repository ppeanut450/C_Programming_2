#include <stdio.h>
int main(void)
{
	int num, d, sum = 0;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	d = num - 1;
	while (d >= 1) {
		if (num % d == 0) {
			sum += d;
		}
		d--;
	}

	if (sum == num)
		printf("%d은(는) 완전수입니다.", num);

	else
		printf("%d은(는) 완전수가 아닙니다.", num);

	return 0;
}