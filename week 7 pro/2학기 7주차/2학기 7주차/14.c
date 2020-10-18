#include <stdio.h>
#include <string.h>

struct music
{
	char title[30];
	char singer[30];
	char position[30];
	int genre;
};

int main(void)
{
	int number = 0, i;
	int n = 0;
	char print_music[30];
	char search[30];
	struct music m[30];

	while (number != 4)
	{
		printf("====================\n");
		printf(" 1. �߰�\n");
		printf(" 2. ���\n");
		printf(" 3. �˻�\n");
		printf(" 4. ����\n");
		printf("====================\n");
		printf("�������� �Է��Ͻÿ�: ");
		scanf_s("%d", &number);

		if (number == 1)
		{
			printf("����: ");
			scanf_s("%s", m[n].title, 30);
			printf("����: ");
			scanf_s("%s", m[n].singer, 30);
			printf("��ġ: ");
			scanf_s("%s", m[n].position, 30);
			printf("�帣(0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����): ");
			scanf_s("%d", &m[n].genre);

			n++;
		}

		else if (number == 2)
		{
			for (i = 0; i < n; i++)
			{
				printf("����: %s\n", m[i].title);
				printf("����: %s\n", m[i].singer);
				printf("��ġ: %s\n", m[i].position);
				printf("�帣(0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����): %d\n", m[i].genre);
			}
		}

		else if (number == 3)
		{
			printf("����: ");
			scanf_s("%s", search, 30);

			for (i = 0; i < n; i++)
			{
				if (strcmp(search, m[i].title) == 0)
				{
					printf("����: %s\n", m[i].singer);
					printf("��ġ: %s\n", m[i].position);
					printf("�帣(0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����): %d\n", m[i].genre);
				}
			}
		}

		else if (number == 4)
			break;

		else
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
}