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
	struct numberbook nb[3];
	
	for (i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf_s("%s", nb[i].name, 30);
		printf("집전화번호를 입력하시오: ");
		scanf_s("%s", nb[i].home_number,30 );
		printf("휴대폰번호를 입력하시오: ");
		scanf_s("%s", nb[i].phone_number, 30);
	}

	printf("\n검색할 이름을 입력하시오: ");
	scanf_s("%s", search, 30);
	for (i = 0; i < 3; i++)
	{
		if (strcmp(search, nb[i].name) == 0)
		{
			printf("집전화번호: %s\n", nb[i].home_number);
			printf("집전화번호: %s\n", nb[i].phone_number);
		}
	}

	return 0;
}