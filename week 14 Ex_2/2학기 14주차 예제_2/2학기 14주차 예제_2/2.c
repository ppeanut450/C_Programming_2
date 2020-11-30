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
		printf("사번을 입력하시오: ");
		scanf_s("%d", &e[i].number);
		printf("이름을 입력하시오: ");
		scanf_s("%s", &e[i].name, 30);
		printf("나이를 입력하시오: ");
		scanf_s("%d", &e[i].age);
		printf("전화번호를 입력하시오: ");
		scanf_s("%s", &e[i].phone, 30);
	}

	for (int i = 0; i < 5; i++)
	{
		if ((20 <= e[i].age) && (e[i].age <= 30))
			printf("이름: %s 나이: %d\n", e[i].name, e[i].age);
	}

	return 0;
}