#include <stdio.h>
int main(void)
{
	int i, max, min, total = 0, max_i = 1, min_i = 1;
	int student[10];
	
	printf("�л� ������ �Է��Ͻÿ�.\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d�� ����: ", i + 1);
		scanf_s("%d", &student[i]);
		total += student[i];
	}

	printf("��ȣ\t����\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d��\t%d\n", i + 1, student[i]);
	}

	printf("�б� ����: %d\n", total);
	printf("�б� ���: %f\n", (double)total / 10.0);

	max = min = student[0];

	for (i = 1; i < 10; i++)
	{
		if (student[i] > max)
		{
			max = student[i];
			max_i = i + 1;
		}
		if (student[i] < min)
		{
			min = student[i];
			min_i = i + 1;
		}
	}

	printf("�ְ��� �л�: %d�� %d��\n", max_i, max);
	printf("������ �л�: %d�� %d��\n", min_i, min);

	return 0;
}