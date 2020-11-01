#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	FILE* fp;
	char fname[100];
	char c;
	int count = 0;

	printf("파일 이름을 입력하시오: ");
	scanf_s("%s", fname, 100);

	fopen_s(&fp, fname, "rt");

	if (fp == NULL)
	{
		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname);
		return 1;
	}

	while (!feof(fp))
	{
		c = fgetc(fp);

		if (isprint(c))
			count++;
	}
	printf("문자의 개수는 %d", count);

	return 0;
}