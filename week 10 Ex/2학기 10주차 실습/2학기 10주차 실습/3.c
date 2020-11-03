#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	int number;
	char title[50];
};

int main(void)
{
	struct Book* p;
	p = (struct Book*)malloc(2 * sizeof(struct Book));
	if (p == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}
	p[0].number = 1;
	strcpy_s(p[0].title, 50, "C Programming");
	p[1].number = 2;
	strcpy_s(p[1].title, 50, "Data Structure");
	printf("%d, %s", p[0].number, p[0].title);
	free(p);
	return 0;
}