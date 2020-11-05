#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* fp;
	char fname[100];
	char buffer[100];
	char word[100];
	int line_num = 0;
	printf("파일 이름: ");
	scanf_s("%s", fname, 100);
	printf("탐색할 단어: ");
	scanf_s("%s", word, 100);
	fopen_s(&fp, fname, "rt");

	if (fp == NULL)
	{
		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname);
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