#include <stdio.h>
#define PI 3.141592
typedef struct point{
	int x, y;
}POINT;

typedef struct circle {
	POINT center;
	double radius;
}CIRCLE;

double area(CIRCLE c)
{
	return c.radius * c.radius * PI;
}

double perimeter(CIRCLE c)
{
	return 2.0 * c.radius * PI;
}

int main(void)
{
	CIRCLE c;
	printf("���� �߽��� x, y�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &c.center.x, &c.center.y);
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &c.radius);

	printf("���� ���� = %lf, ���� �ѷ� = %lf\n", area(c), perimeter(c));

	return 0;
}