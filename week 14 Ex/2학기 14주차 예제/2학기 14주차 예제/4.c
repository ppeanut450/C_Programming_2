#include <stdio.h>
int main(void)
{
	int i, j, high, low;
	int score[5][4] = { 0 };  // ���� �߰�
	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л� ���� �Է�\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%d�� ����: ", j + 1);
			scanf_s("%d", &score[i][j]);
			score[i][3] += score[i][j];  // ����
		}
	}
	printf("��ȣ  1��  2��  3��  ����\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d��: ", i + 1);
		for (j = 0; j < 4;j++)
			printf("  %d ", score[i][j]);
		printf("\n");
	}

	high = score[0][3];
	low = score[0][3];
	for (i = 1; i < 5; i++)
	{
		if (score[i][3] >= high)
			high = score[i][3];
		if (score[i][3] <= low)
			low = score[i][3];
	}
	printf("�ְ���: %d\n", high);
	printf("������: %d\n", low);
	return 0;
}