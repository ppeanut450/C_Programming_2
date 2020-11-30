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
	printf("원의 중심점 x, y를 입력하시오: ");
	scanf_s("%d %d", &c.center.x, &c.center.y);
	printf("원의 반지름을 입력하시오: ");
	scanf_s("%lf", &c.radius);

	printf("원의 면적 = %lf, 원의 둘레 = %lf\n", area(c), perimeter(c));

	return 0;
}