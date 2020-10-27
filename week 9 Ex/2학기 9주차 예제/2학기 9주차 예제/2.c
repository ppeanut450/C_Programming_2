#include <stdio.h>
int main(void)
{
	FILE* fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;
	printf("성적 파일 이름을 입력하시오: ");
	scanf_s("%s", fname, 100);

	fopen_s(&fp, fname, "rt");
	if (fp == NULL)
		{
			fprintf(stderr, "성적 파일 %s을 열 수  없습니다.\n", fname);
			exit(1);
		}
	// 파일에서 성적을 읽어서 평균을 구한다.
	while (!feof(fp))
	{
		fscanf_s(fp, "%d %s %f", &number, name, 20, &score);
		total += score;
		count++;
	}
	printf("평균 = %f\n", total / count);

	fclose(fp);
	return 0;
}