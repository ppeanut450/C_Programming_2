#include <stdio.h>
int main(void)
{
	FILE* fp;
	char fname[100];
	char buffer[100];

	printf("���� �̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", fname, 100);

	fopen_s(&fp, fname, "w");
	
	if (fname == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", fname);
		return 1;
	}

	while (fgets(buffer, 100, stdin) != 0)
		fputs(buffer, fp);

	fclose(fp);

	return 0;
}