#include <stdio.h>
int main(void)
{
	FILE* fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;
	printf("���� ���� �̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", fname, 100);

	fopen_s(&fp, fname, "rt");
	if (fp == NULL)
		{
			fprintf(stderr, "���� ���� %s�� �� ��  �����ϴ�.\n", fname);
			exit(1);
		}
	// ���Ͽ��� ������ �о ����� ���Ѵ�.
	while (!feof(fp))
	{
		fscanf_s(fp, "%d %s %f", &number, name, 20, &score);
		total += score;
		count++;
	}
	printf("��� = %f\n", total / count);

	fclose(fp);
	return 0;
}