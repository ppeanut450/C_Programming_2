#include <stdio.h>

struct account {
	int number;
	char name[20];
	int balance;
};

int main(void)
{
	struct account a;

	a.number = 1;
	strcpy(a.name, "ȫ�浿");
	a.balance = 100000;

	printf("{ %d, %s, %d }", a.number, a.name, a.balance);

	return 0;
}