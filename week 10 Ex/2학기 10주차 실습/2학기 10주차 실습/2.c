#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int* list;
	int i, students;
	printf("�л��� ��: ");
	scanf_s("%d", &students);
	list = (int*)malloc(students * sizeof(int));
	if (list == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	for (i = 0; i < students; i++)
	{
		printf("�л� #%d ����: ", i + 1);
		scanf_s("%d", &list[i]);
	}
	printf("================================\n");
	for (i = 0; i < students; i++)
	{
		printf("�л� #%d ����: %d\n", i + 1, list[i]);
	}
	printf("=================================\n");
	free(list);
	return 0;
}