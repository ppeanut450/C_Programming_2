#include <stdio.h>
int main(void)
{
	int number, rebmun;
	

	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	printf("반전된 정수는 ");

	while (number > 0) {
		rebmun = number % 10;
		number /= 10;
		printf("%d", rebmun);		
	}

	return 0;
}