#include <stdio.h>
#include <stdlib.h>

typedef struct PhoneBook {
	char name[30];
	char number[30];
}PHONEBOOK;
int main(void)
{
	PHONEBOOK* p;
	int i, num;
	p = (PHONEBOOK*)malloc(2 * sizeof(PHONEBOOK));
	if (p == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	printf("��ȭ��ȣ ����: ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf_s("%s", p[i].name, 30);
		printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
		scanf_s("%s", p[i].number, 30);
	}

	printf("========================\n");
	printf("  �̸�   �޴��� ��ȣ\n");
	printf("========================\n");

	for (i = 0; i < num; i++)
	{
		printf(" %s %s\n", p[i].name, p[i].number);
	}

	free(p);
	return 0;
}