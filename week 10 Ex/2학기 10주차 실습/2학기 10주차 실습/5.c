#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("���� 2���� ������ ������ �ʿ�\n");
	int* list = (int*)malloc(sizeof(int) * 2);
	int i;
	int* list_new;
	list[0] = 10;
	list[1] = 20;
	printf("���� 3���� ������ �������� Ȯ��\n");
	list_new = (int*)realloc(list, sizeof(int) * 3);
	list_new[2] = 30;
	for (i = 0; i < 3; i++)
		printf("%d ", list_new[i]);
	printf("\n");
	free(list);
	return 0;
}