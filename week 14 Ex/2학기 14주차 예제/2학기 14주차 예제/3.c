#include <stdio.h>
int main(void)
{
	int i, max, min, total = 0, max_i = 1, min_i = 1;
	int student[10];
	
	printf("학생 성적을 입력하시오.\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d번 성적: ", i + 1);
		scanf_s("%d", &student[i]);
		total += student[i];
	}

	printf("번호\t성적\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d번\t%d\n", i + 1, student[i]);
	}

	printf("학급 총점: %d\n", total);
	printf("학급 평균: %f\n", (double)total / 10.0);

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

	printf("최고점 학생: %d번 %d점\n", max_i, max);
	printf("최저점 학생: %d번 %d점\n", min_i, min);

	return 0;
}