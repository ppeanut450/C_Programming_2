#include <stdio.h>
int main(void)
{
	FILE* fp;
	char buffer[100];
	int i;

	fopen_s(&fp, "proverbs.txt", "rt");
	if (fp == NULL)
	{
		fprintf(stderr, "proverbs.txt 파일을 열 수 없습니다.");
		return 1;
	}

	for (i = 0; feof(fp) == 0; i++)
	{
		fgets(buffer, 100, fp);
		printf("%6d: ", i + 1);
		printf("%s\n", buffer);
	}

	fclose(fp);

	return 0;
}