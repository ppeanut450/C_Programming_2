#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* fp;
	char fname[128];
	char buffer[256];
	char word[256];
	int line_num = 0;

	printf("�Է� ���� �̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", fname, 128);
	printf("Ž���� �ܾ �Է��Ͻÿ�: ");
	scanf_s("%s", word, 256);
	fopen_s(&fp, fname, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", fname);
		exit(1);
	}
	while (fgets(buffer, 256, fp))
	{
		line_num++;
		if (strstr(buffer, word))
		{
			printf("%s: %d �ܾ� %s�� �߰ߵǾ����ϴ�. \n", fname, line_num, word);
		}
	}
	fclose(fp);
	return 0;
}