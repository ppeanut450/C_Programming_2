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


 4��
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
	int w, h, area, peri;  // ���� w, ���� h, ���� area, �ѷ� peri
	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);
	printf("������ ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);
	return 0;
}


// 5��
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
	
	/* if (p1 == p2)  // ���� �� x
		printf("p1�� p2�� �����ϴ�."); */

	if ((p1.x == p2.x) && (p1.y == p2.y))
		printf("p1�� p2�� �����ϴ�.");

	return 0;

}


// 6��
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
		printf("�й��� �Է��Ͻÿ�: ");
		scanf_s("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf_s("%s", list[i].name, 10);
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("�й�: %d, �̸�: %s, ����: %f\n", list[i].number, list[i].name, list[i].grade);
	}

	return 0;
}


// 7��
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


// 8��
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

	printf("������ ���� = %d\n", array_sum(C,N_E));

	return 0;
}


// 9��
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

	printf("������ ���� = %d\n", array_sum(C,N_E));
	printf("������ 200������ ����� �ε��� = %d\n", search(C, N_E, 200));
	return 0;
}


// 10��
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

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, 100);
	printf("ã�� ���ڿ�: ");
	gets_s(find, 10);
	printf("�ٲ� ���ڿ�: ");
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

	printf("������ ���ڿ�: %s\n", target);

	return 0;
}