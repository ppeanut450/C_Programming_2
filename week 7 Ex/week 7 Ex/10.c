// sdl �˻� ���� ����
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

	printf("������ ���� ���� �л��� (�̸�: %s, �й�: %d, ����: %lf)�Դϴ�.", super_stu.name, super_stu.number, super_stu.score);
}

int main(void)
{
	struct student list[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("�л� ������ �Է��ϼ���\n");
		printf("�й��� �Է��ϼ���: ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��ϼ���: ");
		scanf("%s", list[i].name);
		printf("������ �Է��ϼ���: ");
		scanf("%lf", &list[i].score);
	}

	get_max_stu(list);
}