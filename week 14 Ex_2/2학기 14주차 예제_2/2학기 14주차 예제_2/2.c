#include <stdio.h>
typedef struct employee {
	int number;
	char name[30];
	char phone[30];
	int age;
} EMPLOYEE;

int main(void)
{
	EMPLOYEE e[5];
	
	for (int i = 0; i < 5; i++)
	{
		printf("����� �Է��Ͻÿ�: ");
		scanf_s("%d", &e[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf_s("%s", &e[i].name, 30);
		printf("���̸� �Է��Ͻÿ�: ");
		scanf_s("%d", &e[i].age);
		printf("��ȭ��ȣ�� �Է��Ͻÿ�: ");
		scanf_s("%s", &e[i].phone, 30);
	}

	for (int i = 0; i < 5; i++)
	{
		if ((20 <= e[i].age) && (e[i].age <= 30))
			printf("�̸�: %s ����: %d\n", e[i].name, e[i].age);
	}

	return 0;
}