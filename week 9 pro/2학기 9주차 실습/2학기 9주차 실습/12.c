#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* fp;
	char fname[100];
	char buffer[100];
	char word[100];
	int line_num = 0;
	printf("���� �̸�: ");
	scanf_s("%s", fname, 100);
	printf("Ž���� �ܾ�: ");
	scanf_s("%s", word, 100);
	fopen_s(&fp, fname, "rt");

	if (fp == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", fname);
		exit(1);
	}

	while (fgets(buffer, 100, fp))
	{
		line_num++;
		if (strstr(buffer, word))
			printf("%s: %-3d %s", fname, line_num, buffer);
	}

	fclose(fp);

	return 0;
}