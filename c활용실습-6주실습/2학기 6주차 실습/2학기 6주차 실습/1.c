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
	strcpy(b.title, "바람과 함께 사라지다");
	strcpy(b.author, "마가렛 미첼");

	printf("{ %d, %s, %s }", b.id, b.title, b.author);

	return 0;
}