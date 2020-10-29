#include <stdio.h>
struct student
{
	char name[30];
	int korean;
	int math;
	int english;
};

int main(void)
{
	struct student s;

	FILE* fp1, * fp2;

	fopen_s(&fp1, "student.txt", "rb");
	fopen_s(&fp2, "score.txt", "wb");

	if (fp1 == NULL || fp2 == NULL)
	{
		fprintf(stderr, "파일 열기 오류\n");
		return 1;
	}

	while (!feof(fp1))
	{
	fscanf_s(fp1, "%s %d %d %d", s.name, 30, &s.korean, &s.math, &s.english);
	fprintf(fp2, "%s %.2lf\n", s.name, ((double)s.korean + (double)s.math + (double)s.english) / 3.0 );
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}