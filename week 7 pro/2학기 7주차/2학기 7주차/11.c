#include <stdio.h>
#include <string.h>

struct numberbook
{
	char name[30];
	char home_number[30];
	char phone_number[30];
};

int main(void)
{
	int i;
	char search[30];
	struct numberbook nb[3] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf_s("%s", nb[i].name, 30);
		printf("����ȭ��ȣ�� �Է��Ͻÿ�: ");
		scanf_s("%s", nb[i].home_number, 30);
		printf("�޴�����ȣ�� �Է��Ͻÿ�: ");
		scanf_s("%s", nb[i].phone_number, 30);
	}

	printf("\n�˻��� �̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", search, 30);
	for (i = 0; i < 3; i++)
	{
		if (strcmp(search, nb[i].name) == 0)
		{
			printf("����ȭ��ȣ: %s\n", nb[i].home_number);
			printf("����ȭ��ȣ: %s\n", nb[i].phone_number);
		}
	}

	return 0;
}