#include <stdio.h>

struct book {
	int id;
	char title[30];
	char author[30];
};

int main(void)
{
	struct book b;

	b.id = 1;
	strcpy(b.title, "�ٶ��� �Բ� �������");
	strcpy(b.author, "������ ��ÿ");

	printf("{ %d, %s, %s }", b.id, b.title, b.author);

	return 0;
}