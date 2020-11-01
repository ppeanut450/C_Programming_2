#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* fp1, * fp2;
	char filename1[100], filename2[100];
	char buffer1[100], buffer2[100];
	printf("첫번째 파일 이름: ");
	scanf_s("%s", filename1, 100);
	printf("두번째 파일 이름: ");
	scanf_s("%s", filename2, 100);
	fopen_s(&fp1, filename1, "rt");
	fopen_s(&fp2, filename2, "rt");
	
	if (fp1 == NULL || fp2 == NULL)
	{
		fprintf(stderr, "파일을 읽을 수 없습니다..\n");
		return 1;
	}

	while (!feof(fp1) && !feof(fp2))
	{
		fgets(buffer1, 100, fp1);
		fgets(buffer2, 100, fp2);
		if (strcmp(buffer1, buffer2) != 0)
		{
			printf("%s\n%s\n", buffer1, buffer2);
			fclose(fp1);
			fclose(fp2);
			return 0;
		}
	}

	printf("파일은 서로 일치함\n");
	fclose(fp1);
	fclose(fp2);

	return 0;
}