#include <stdio.h>
#include <string.h>
struct student {
	int number;
	char name[20];
	double grade;
};

struct student create()
{
	struct student s;
	s.number = 3;
	strcpy_s(s.name, 20, "park");  // _s(���ڿ� �Է� ����): ��ȣ �ȿ� ���ڿ� �Է��� �ִ� ũ�⸦ �����
	s.grade = 4.0;
	return s;
}

int main(void)
{
	struct student a;
	a = create();
	printf("%d %s %f \n", a.number, a.name, a.grade);

	return 0;
}