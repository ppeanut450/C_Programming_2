#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int* list;
	int i, num, sum = 0;

	printf("�Է��� ������ ������? ");
	scanf_s("%d", &num);

	list = (int*)malloc(num * sizeof(int));
	if (list == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < num; i++)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &list[i]);
		sum += list[i];
	}

	printf("���� %d�Դϴ�.", sum);

	free(list);
	return 0;
}