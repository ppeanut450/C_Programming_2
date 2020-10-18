#include <stdio.h>
struct shape {
	int type;
	union
	{
		struct { int base, height; } tri;
		struct { int width, height;  } rect;
		struct { int radius; } circ;
	} data;
};

int main(void)
{
	struct shape s;

	int area = 0;

	printf("도형의 타입을 입력하시오(0, 1, 2): ");
	scanf_s("%d", &s.type);
	printf("가로와 세로의 길이를 입력하시오(예를 들어서 100 200): ");
	if (s.type == 0)
	{
		scanf_s("%d %d", &s.data.tri.base, &s.data.tri.height);
		area = s.data.tri.base * s.data.tri.height * 0.5;
	}
	else if (s.type == 1)
	{
		scanf_s("%d %d", &s.data.rect.width, &s.data.rect.height);
		area = s.data.rect.width * s.data.rect.height;
	}
	else if (s.type == 2)
	{
		scanf_s("%d", &s.data.circ.radius);
		area = s.data.circ.radius * s.data.circ.radius * 3.14;
	}
	else
		printf("잘못 입력하셨습니다.");

	printf("면적은 %d", area);

	return 0;
}