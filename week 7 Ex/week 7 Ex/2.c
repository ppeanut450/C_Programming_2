#include <stdio.h>
struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;
	char name[20];
	double grade;
	struct date *dob;
};

int main(void)
{
	struct date d = { 5, 3, 2000 };
	struct student s = { 20193012, "������", 4.5 };
	
	s.dob = &d;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);
	printf("�������: %d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);
	
	return 0;
}