// 1��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;
	s.number = 20193012;
	strcpy_s(s.name, 10, "������");
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %lf\n", s.grade);

	return 0;
}


// 2��
#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double grade;	
};

int main(void)
{
	struct student s;

	printf("�й��� �Է��Ͻÿ�: ");
	scanf_s("%d", &s.number);
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", s.name, 10);  // �迭�̶� �ּҿ����� �ʿ� x, ��� �迭�� ���� �������
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &s.grade);

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %lf\n", s.grade);

	return 0;
}


// 3��
#include <stdio.h>
#include <math.h>  // �������� ���ϴ� sqrt�Լ�

struct point
{
	int x, y;
};

int main(void)
{
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;

	printf("���� ��ǥ�� �Է��Ͻÿ�(x y): ");
	scanf_s("%d %d", &p1.x, &p1.y);
	printf("���� ��ǥ�� �Է��Ͻÿ�(x y): ");
	scanf_s("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));  // sqrt�� double���ε� ��ǥ�� int���̹Ƿ� ����ȯ
	printf("�� �� ������ �Ÿ��� %f�Դϴ�.\n", dist);
}


