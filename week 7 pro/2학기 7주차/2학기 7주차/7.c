#include <stdio.h>
struct point
{
	int x, y;
};

int quadrant(struct point p)
{
	if (p.x > 0 && p.y > 0)
		printf("(%d, %d)�� ��и� = 1", p.x, p.y);
	else if (p.x < 0 && p.y>0)
		printf("(%d, %d)�� ��и� = 2", p.x, p.y);
	else if (p.x < 0 && p.y < 0)
		printf("(%d, %d)�� ��и� = 3", p.x, p.y);
	else if (p.x > 0 && p.y < 0)
		printf("(%d, %d)�� ��и� = 4", p.x, p.y);
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");
	return 0;
}

int main(void) 
{
	struct point p = { -1, 2 };
	
	quadrant(p);
}