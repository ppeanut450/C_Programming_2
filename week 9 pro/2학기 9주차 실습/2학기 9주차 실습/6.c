#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	FILE* fp;
	char fname[100];
	char c;
	int count = 0;

	printf("���� �̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", fname, 100);

	fopen_s(&fp, fname, "rt");

	if (fp == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", fname);
		return 1;
	}

	while (!feof(fp))
	{
		c = fgetc(fp);

		if (isprint(c))
			count++;
	}
	printf("������ ������ %d", count);

	fclose(fp);

	return 0;
}