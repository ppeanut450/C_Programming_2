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
	printf("1. 초기화\n");
	printf("2. 전화 번호 추가\n");
	printf("3. 전화 번호 탐색\n");
	printf("4. 전화 번호 변경\n");
	printf("5. 종료\n");
	printf("------------------------------------\n");
}

//reset()
//{
//
//}

void add(NODE* p)
{
	getchar();
	printf("이름: ");
	gets_s(p->name, 30);
	printf("번호: ");
	gets_s(p->phone, 30);
	printf("\n");
}

void search(NODE* p, NODE* list)
{
	char buffer[30];
	getchar();
	printf("탐색하고자 하는 이름: ");
	gets_s(buffer, 30);
	p = list;
	while (p != NULL)
	{
		if(strcmp(p->name, buffer) == 0)
		{
			printf("이름: %s\n", p->name);
			printf("번호: %s\n", p->phone);
			break;
		}
		p = p->link;
	}
}

void change(NODE* p, NODE* list)
{
	char buffer1[30];
	char buffer2[30];
	getchar();
	printf("탐색하고자 하는 이름: ");
	gets_s(buffer1, 30);
	p = list;
	
	while (p != NULL)
	{
		if (strcmp(buffer1, p->name) == 0)
		{
			printf("변경할 번호: ");
			gets_s(buffer2, 30);

			strcpy_s(p->phone, 30, buffer2, 30);
			printf("변경되었습니다.\n");
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

	printf("연결 리스트를 이용한 전화 번호부 메뉴\n");

	while (1)
	{
		print_menu();

		printf("번호를 입력하세요: ");
		scanf_s("%d", &num);

		if (num == 5)
			break;

		p = (NODE*)malloc(sizeof(NODE));
		
		switch (num)
		{
			case 1:
				p = NULL;
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
				printf("다시 입력해주세요.\n");
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