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
		printf("메모리 할당 오류\n");
		exit(1);
	}

	printf("전화번호 개수: ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("이름을 입력하시오: ");
		scanf_s("%s", p[i].name, 30);
		printf("휴대폰 번호를 입력하시오: ");
		scanf_s("%s", p[i].number, 30);
	}

	printf("========================\n");
	printf("  이름   휴대폰 번호\n");
	printf("========================\n");

	for (i = 0; i < num; i++)
	{
		printf(" %s %s\n", p[i].name, p[i].number);
	}

	free(p);
	return 0;
}