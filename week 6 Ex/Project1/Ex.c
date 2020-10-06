// 1번
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
	strcpy_s(s.name, 10, "박은서");
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %lf\n", s.grade);

	return 0;
}


// 2번
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

	printf("학번을 입력하시오: ");
	scanf_s("%d", &s.number);
	printf("이름을 입력하시오: ");
	scanf_s("%s", s.name, 10);  // 배열이라 주소연산자 필요 x, 대신 배열의 길이 써줘야함
	printf("학점을 입력하시오: ");
	scanf_s("%lf", &s.grade);

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %lf\n", s.grade);

	return 0;
}


// 3번
#include <stdio.h>
#include <math.h>  // 제곱근을 구하는 sqrt함수

struct point
{
	int x, y;
};

int main(void)
{
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;

	printf("점의 좌표를 입력하시오(x y): ");
	scanf_s("%d %d", &p1.x, &p1.y);
	printf("점의 좌표를 입력하시오(x y): ");
	scanf_s("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));  // sqrt는 double형인데 좌표는 int형이므로 형변환
	printf("두 점 사이의 거리는 %f입니다.\n", dist);
}


