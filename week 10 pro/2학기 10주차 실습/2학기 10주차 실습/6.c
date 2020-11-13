#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
	char name[30];
	char phone[30];
	struct NODE* link;
} NODE;

void print_menu()
{
	printf("------------------------------------\n");
	printf("1. �ʱ�ȭ\n");
	printf("2. ��ȭ ��ȣ �߰�\n");
	printf("3. ��ȭ ��ȣ Ž��\n");
	printf("4. ��ȭ ��ȣ ����\n");
	printf("5. ����\n");
	printf("------------------------------------\n");
}

void add(NODE* p)
{
	getchar();
	printf("\n");
	printf("�̸�: ");
	gets_s(p->name, 30);
	printf("��ȣ: ");
	gets_s(p->phone, 30);
	printf("\n");
	printf("�߰��Ǿ����ϴ�.\n");
	printf("\n");
}

void search(NODE* p, NODE* list)
{
	char buffer[30];
	getchar();
	printf("\n");
	printf("Ž���ϰ��� �ϴ� �̸�: ");
	gets_s(buffer, 30);
	printf("\n");
	p = list;
	while (p != NULL)
	{
		if(strcmp(p->name, buffer) == 0)
		{
			printf("�̸�: %s\n", p->name);
			printf("��ȣ: %s\n\n", p->phone);
			break;
		}
		p = p->link;
	}

	if (p == NULL)
		printf("�Էµ� �̸��� �������� �ʽ��ϴ�.\n\n");

}

void change(NODE* p, NODE* list)
{
	char buffer1[30];
	char buffer2[30];
	getchar();	printf("\n");
	printf("�����ϰ��� �ϴ� �̸�: ");
	gets_s(buffer1, 30);
	p = list;
	
	while (p != NULL)
	{
		if (strcmp(buffer1, p->name) == 0)
		{
			printf("���� ��ȭ ��ȣ: %s\n", p->phone);
			printf("������ ��ȭ ��ȣ: ");
			gets_s(buffer2, 30);

			strcpy_s(p->phone, 30, buffer2);
			printf("\n����Ǿ����ϴ�.\n\n");
			break;
		}
		p = p->link;
	}

}

int main(void)
{
	NODE* list = NULL;
	NODE* prev = NULL;
	NODE* p = NULL;
	NODE* next = NULL;

	int num;

	printf("���� ����Ʈ�� �̿��� ��ȭ ��ȣ�� �޴�\n");

	while (1)
	{
		print_menu();

		printf("��ȣ�� �Է��ϼ���: ");
		scanf_s("%d", &num);

		if (num == 5)
			break;

		p = (NODE*)malloc(sizeof(NODE));
		
		switch (num)
		{
			case 1:
				list = NULL;
				printf("\n�ʱ�ȭ �Ǿ����ϴ�.\n\n");
				break;

			case 2: 
				add(p);
				if (list == NULL)
					list = p;
				else
					prev->link = p;
				p->link = NULL;
				prev = p;
				break;

			case 3:
				search(p, list);
				break;

			case 4:
				change(p, list);
				break;
			default:
				printf("�ٽ� �Է����ּ���.\n");
				break;
		}
	}

	p = list;
	while (p != NULL)
	{
		next = p->link;
		free(p);
		p = next;
	}
	
	return 0;
}