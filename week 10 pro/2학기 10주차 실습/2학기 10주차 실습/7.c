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
	printf("1. 영화 정보 추가\n");
	printf("2. 영화 정보 출력\n");
	printf("3. 종료\n");
	printf("----------------------------------\n");
}

void add_movie(NODE* p)
{
	char buffer[30];
	int year;
	
	printf("\n");
	printf("영화의 제목을 입력하시오: ");
	scanf_s("%s", p->title, 30);
	printf("영화의 개봉 연도를 입력하시오: ");
	scanf_s("%d", &year);
	p->year = year;
	printf("\n");
}

void print_movie(NODE* p, NODE* list)
{	
	p = list;

	while (p != NULL)
	{
		printf("\n영화 제목: %s\n", p->title);
		printf("개봉 연도: %d\n\n", p->year);
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

	printf("연결 리스트를 이용한 영화관리 메뉴\n");
	while (1)
	{
		print_menu();
		printf("번호를 선택하시오: ");
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
				printf("다시 입력하시오.\n");
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