#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* fp1, * fp2;
	char filename1[100], filename2[100];
	char buffer1[100], buffer2[100];
	printf("ù��° ���� �̸�: ");
	scanf_s("%s", filename1, 100);
	printf("�ι�° ���� �̸�: ");
	scanf_s("%s", filename2, 100);
	fopen_s(&fp1, filename1, "rt");
	fopen_s(&fp2, filename2, "rt");

	if (fp1 == NULL || fp2 == NULL)
	{
		fprintf(stderr, "������ �� �� �����ϴ�..\n");
		return 1;
	}

	while (!feof(fp1) && !feof(fp2))
	{
		fgets(buffer1, 100, fp1);
		fgets(buffer2, 100, fp2);
		if (strcmp(buffer1, buffer2) != 0)
		{
			printf("<< %s", buffer1);
			printf(">> %s", buffer2);
			fclose(fp1);
			fclose(fp2);
			return 0;
		}
	}

	printf("������ ���� ��ġ��\n");
	fclose(fp1);
	fclose(fp2);

	return 0;
}