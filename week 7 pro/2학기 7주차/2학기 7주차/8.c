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

	printf("원의 중심점: ");
	scanf_s("%d %d", &p.x, &p.y);
	printf("원의 반지름: ");
	scanf_s("%lf", &c.radius);
	printf("원의 면적=%lf, 원의 둘레=%lf", area(c), perimeter(c));
}