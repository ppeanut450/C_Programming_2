#include <stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};

int equal(struct student s1, struct student s2)
{
	if (s1.number == s2.number)
		return 1;
	else
		return 0;
}

int main(void)
{
	struct student a = { 1,"hong", 3.8 };
	struct student b = { 2,"kim",4.0 };

	if (equal(a, b) == 1)
		printf("���� �л� \n");
	else
		printf("�ٸ� �л� \n");

	return 0;
}