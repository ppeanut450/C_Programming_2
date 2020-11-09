//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct NODE {
//	int num;
//	struct NODE* link;
//} NODE;
//
//int main(void)
//{
//	int num = 0;
//	NODE* list = NULL;
//	NODE* prev = NULL;
//	NODE* p = NULL;
//	NODE* next = NULL;
//
//	while (1)
//	{
//		printf("양의 정수를 입력하세요(종료 -1): ");
//		scanf_s("%d", &num);
//
//		if (num == -1)
//			break;
//
//		p = (NODE*)malloc(sizeof(NODE));
//		
//		p->num = num;
//		if (list == NULL)
//			list = 0;
//		else
//			prev->link = p;
//		p->link = NULL;
//		prev = p;
//	}
//
//	p = list;
//
//	while (p != NULL)
//	{
//		printf("%d ", p->num);
//		p = p->link;
//	}
//	p = list;
//	while (p != NULL)
//	{
//		next = p->link;
//		free(p);
//		p = next;
//	}
//	return 0;
//}