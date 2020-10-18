#include <stdio.h>
struct point
{
	int x, y;
};

typedef struct circle
{
	struct point center;
	double radius;
}CIRCLE;

double area(CIRCLE c)
{
	return c.radius * c.radius * 3.14;
}

double perimeter(CIRCLE c)
{
	return 2 * 3.14 * c.radius;
}



int main(void)
{
	struct point p;
	CIRCLE c;

	printf("���� �߽���: ");
	scanf_s("%d %d", &p.x, &p.y);
	printf("���� ������: ");
	scanf_s("%lf", &c.radius);
	printf("���� ����=%lf, ���� �ѷ�=%lf", area(c), perimeter(c));
}