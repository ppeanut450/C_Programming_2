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

	fopen_s(&fp, fname, "wt");
	while (1)
	{
		printf("�й�, �̸�, ������ �Է��Ͻÿ�: (�����̸� ����)");
		scanf_s("%d", &number);
		if (number < 0)
			break;
		scanf_s("%s %f", name, 20, &score);
		fprintf(fp, "%d %s %f", number, name, score);
	}
	fclose(fp);
	return 0;
}