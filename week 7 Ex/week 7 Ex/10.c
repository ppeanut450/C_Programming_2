// sdl 검사 끄고 진행
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double score;
};

get_max_stu(struct student list[])
{
	struct student super_stu;
	int i;
	super_stu = list[0];
	for (i = 0; i < 3; i++)
	{
		if (list[i].score > super_stu.score)
			super_stu = list[i];
	}

	printf("학점이 가장 높은 학생은 (이름: %s, 학번: %d, 평점: %lf)입니다.", super_stu.name, super_stu.number, super_stu.score);
}

int main(void)
{
	struct student list[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("학생 정보를 입력하세요\n");
		printf("학번을 입력하세요: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하세요: ");
		scanf("%s", list[i].name);
		printf("평점을 입력하세요: ");
		scanf("%lf", &list[i].score);
	}

	get_max_stu(list);
}