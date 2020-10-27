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

	fopen_s(&fp, fname, "wt");
	while (1)
	{
		printf("학번, 이름, 성적을 입력하시오: (음수이면 종료)");
		scanf_s("%d", &number);
		if (number < 0)
			break;
		scanf_s("%s %f", name, 20, &score);
		fprintf(fp, "%d %s %f", number, name, score);
	}
	fclose(fp);
	return 0;
}