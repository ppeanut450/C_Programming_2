#include <stdio.h>
int main(void)
{
	int i, j, high, low;
	int score[5][4] = { 0 };  // 총점 추가
	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생 성적 입력\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%d차 성적: ", j + 1);
			scanf_s("%d", &score[i][j]);
			score[i][3] += score[i][j];  // 총점
		}
	}
	printf("번호  1차  2차  3차  총점\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d번: ", i + 1);
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
	printf("최고점: %d\n", high);
	printf("최저점: %d\n", low);
	return 0;
}