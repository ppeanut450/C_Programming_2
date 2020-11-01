#include <stdio.h>
int main(void)
{
	FILE* fp;
	char fname[100];
	char buffer[100];

	printf("파일 이름을 입력하시오: ");
	scanf_s("%s", fname, 100);

	fopen_s(&fp, fname, "w");
	
	if (fname == NULL)
	{
		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname);
		return 1;
	}

	while (fgets(buffer, 100, stdin) != 0)
		fputs(buffer, fp);

	fclose(fp);

	return 0;
}