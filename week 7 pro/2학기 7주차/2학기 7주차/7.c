#include <stdio.h>
struct point
{
	int x, y;
};

int quadrant(struct point p)
{
	if (p.x > 0 && p.y > 0)
		printf("(%d, %d)의 사분면 = 1", p.x, p.y);
	else if (p.x < 0 && p.y>0)
		printf("(%d, %d)의 사분면 = 2", p.x, p.y);
	else if (p.x < 0 && p.y < 0)
		printf("(%d, %d)의 사분면 = 3", p.x, p.y);
	else if (p.x > 0 && p.y < 0)
		printf("(%d, %d)의 사분면 = 4", p.x, p.y);
	else
		printf("잘못 입력하셨습니다.");
	return 0;
}

int main(void) 
{
	struct point p = { -1, 2 };
	
	quadrant(p);
}