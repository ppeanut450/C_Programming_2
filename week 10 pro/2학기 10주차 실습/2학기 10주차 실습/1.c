#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int* list;
	int i, num, sum = 0;

	printf("입력할 정수의 개수는? ");
	scanf_s("%d", &num);

	list = (int*)malloc(num * sizeof(int));
	if (list == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < num; i++)
	{
		printf("정수를 입력하시오: ");
		scanf_s("%d", &list[i]);
		sum += list[i];
	}

	printf("합은 %d입니다.", sum);

	free(list);
	return 0;
}