#include <stdio.h>
struct point
{
	int x, y;
};

struct circle
{
	struct point center;
	double radius;
};

double area(struct circle c)
{
	return c.radius * c.radius * 3.14;
}

double perimeter(struct circle c)
{
	return 2 * 3.14 * c.radius;
}



int main(void)
{
	struct point p;
	struct circle c;

	printf("원의 중심점: ");
	scanf_s("%d %d", &p.x, &p.y);
	printf("원의 반지름: ");
	scanf_s("%lf", &c.radius);
	printf("원의 면적=%lf, 원의 둘레=%lf", area(c), perimeter(c));
}