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
		printf(" 1. 추가\n");
		printf(" 2. 출력\n");
		printf(" 3. 검색\n");
		printf(" 4. 종료\n");
		printf("====================\n");
		printf("정수값을 입력하시오: ");
		scanf_s("%d", &number);

		if (number == 1)
		{
			printf("제목: ");
			scanf_s("%s", m[n].title, 30);
			printf("가수: ");
			scanf_s("%s", m[n].singer, 30);
			printf("위치: ");
			scanf_s("%s", m[n].position, 30);
			printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): ");
			scanf_s("%d", &m[n].genre);

			n++;
		}

		else if (number == 2)
		{
			for (i = 0; i < n; i++)
			{
				printf("제목: %s\n", m[i].title);
				printf("가수: %s\n", m[i].singer);
				printf("위치: %s\n", m[i].position);
				printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): %d\n", m[i].genre);
			}
		}

		else if (number == 3)
		{
			printf("제목: ");
			scanf_s("%s", search, 30);

			for (i = 0; i < n; i++)
			{
				if (strcmp(search, m[i].title) == 0)
				{
					printf("가수: %s\n", m[i].singer);
					printf("위치: %s\n", m[i].position);
					printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): %d\n", m[i].genre);
				}
			}
		}

		else if (number == 4)
			break;

		else
			printf("잘못 입력하셨습니다.\n");
	}
}