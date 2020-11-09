#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
	char title[30];
	int year;
	struct NODE* link;
} NODE;

void print_menu()
{
	printf("----------------------------------\n");
	printf("1. ��ȭ ���� �߰�\n");
	printf("2. ��ȭ ���� ���\n");
	printf("3. ����\n");
	printf("----------------------------------\n");
}

void add_movie(NODE* p)
{
	char buffer[30];
	int year;
	
	printf("\n");
	printf("��ȭ�� ������ �Է��Ͻÿ�: ");
	scanf_s("%s", p->title, 30);
	printf("��ȭ�� ���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);
	p->year = year;
	printf("\n");
}

void print_movie(NODE* p, NODE* list)
{	
	p = list;

	while (p != NULL)
	{
		printf("\n��ȭ ����: %s\n", p->title);
		printf("���� ����: %d\n\n", p->year);
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
	char buffer[30];
	int year;

	printf("���� ����Ʈ�� �̿��� ��ȭ���� �޴�\n");
	while (1)
	{
		print_menu();
		printf("��ȣ�� �����Ͻÿ�: ");
		scanf_s("%d", &num);

		p = (NODE*)malloc(sizeof(NODE));

		switch (num)
		{
			case 1:				
				add_movie(p);
				if (list == NULL)
					list = p;
				else
					prev->link = p;
				p->link = NULL;
				prev = p;
				break;
			case 2:
				print_movie(p, list);
				break;
			case 3:
				return 0;
			default:
				printf("�ٽ� �Է��Ͻÿ�.\n");
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