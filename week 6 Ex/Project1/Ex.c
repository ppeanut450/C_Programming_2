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


 4번
#include <stdio.h>

struct point
{
	int x, y;
};

struct rect
{
	struct point p1, p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;  // 가로 w, 세로 h, 넓이 area, 둘레 peri
	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);
	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
	return 0;
}


// 5번
#include <stdio.h>
struct point
{
	int x, y;
};

int main(void)
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };

	p2 = p1;
	
	/* if (p1 == p2)  // 직접 비교 x
		printf("p1과 p2가 같습니다."); */

	if ((p1.x == p2.x) && (p1.y == p2.y))
		printf("p1과 p2는 같습니다.");

	return 0;

}


// 6번
#include <stdio.h>
#define SIZE 3

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];
	
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오: ");
		scanf_s("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf_s("%s", list[i].name, 10);
		printf("학점을 입력하시오(실수): ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("학번: %d, 이름: %s, 학점: %f\n", list[i].number, list[i].name, list[i].grade);
	}

	return 0;
}


// 7번
#include <stdio.h>
#define N_E 10
void array_add(int* A, int* B, int* C, int size)
{
	int i;
	for (i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}

void array_print(char* name, int* A, int size)
{
	int i;
	printf("%s", name);
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void)
{
	int A[N_E] = { 200, 150, 220, 130, 350, 180, 200, 270, 330, 500 };
	int B[N_E] = { 30, 50, 40, 20, 30, 10, 20, 40, 50, 10 };
	int C[N_E] = { 0 };

	array_print("A[]=", A, N_E);
	array_print("B[]=", B, N_E);
	array_add(A, B, C, N_E);
	array_print("C[]=", C, N_E);

	return 0;
}


// 8번
#include <stdio.h>
#define N_E 10
void array_add(int* A, int* B, int* C, int size)
{
	int i;
	for (i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}

void array_print(char* name, int* A, int size)
{
	int i;
	printf("%s", name);
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int array_sum(int* A, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += A[i];
	return sum;
}

int main(void)
{
	int A[N_E] = { 200, 150, 220, 130, 350, 180, 200, 270, 330, 500 };
	int B[N_E] = { 30, 50, 40, 20, 30, 10, 20, 40, 50, 10 };
	int C[N_E] = { 0 };

	array_print("A[]=", A, N_E);
	array_print("B[]=", B, N_E);
	array_add(A, B, C, N_E);
	array_print("C[]=", C, N_E);

	printf("월급의 총합 = %d\n", array_sum(C,N_E));

	return 0;
}


// 9번
#include <stdio.h>
#define N_E 10
void array_add(int* A, int* B, int* C, int size)
{
	int i;
	for (i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}

void array_print(char* name, int* A, int size)
{
	int i;
	printf("%s", name);
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int array_sum(int* A, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += A[i];
	return sum;
}

int search(int* A, int size, int x)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (A[i] == x)
			return i;
	}
	return -1;
}

int main(void)
{
	int A[N_E] = { 200, 150, 220, 130, 350, 180, 200, 270, 330, 500 };
	int B[N_E] = { 30, 50, 40, 20, 30, 10, 20, 40, 50, 10 };
	int C[N_E] = { 0 };

	array_print("A[]=", A, N_E);
	array_print("B[]=", B, N_E);
	array_add(A, B, C, N_E);
	array_print("C[]=", C, N_E);

	printf("월급의 총합 = %d\n", array_sum(C,N_E));
	printf("월급이 200만원인 사람의 인덱스 = %d\n", search(C, N_E, 200));
	return 0;
}


// 10번
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	char s[100], find[10], replace[10], target[100] = "";
	char seps[] = " ";
	char* token;
	char* next_token = NULL;

	printf("문자열을 입력하시오: ");
	gets_s(s, 100);
	printf("찾을 문자열: ");
	gets_s(find, 10);
	printf("바꿀 문자열: ");
	gets_s(replace, 10);

	token = strtok_s(s, seps, &next_token);
	while (token != NULL)
	{
		if (strcmp(token, find) == 0)
			strcat_s(target, _countof(target), replace);
		else
			strcat_s(target, _countof(target), token);
		token = strtok_s(NULL, seps, &next_token);
		strcat_s(target, _countof(target), " ");
	}

	printf("수정된 문자열: %s\n", target);

	return 0;
}