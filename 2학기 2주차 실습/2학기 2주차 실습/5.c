#include <stdio.h>
int main(void)
{
	int number, rebmun;
	

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	printf("������ ������ ");

	while (number > 0) {
		rebmun = number % 10;
		number /= 10;
		printf("%d", rebmun);		
	}

	return 0;
}