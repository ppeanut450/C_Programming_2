#include <stdio.h>
struct point
{
	int x, y;
};

int equal(struct point* p1, struct point* p2)
{
	if (p1->x == p2->x && p1->y == p2->y)
		return 1;
	else
		return 0;
}

int main(void)
{
	struct point pp1 = { 1, 2 };
	struct point pp2 = { 3, 5 };

	struct point *p1, *p2;
	
	p1 = &pp1;
	p2 = &pp2;

	if (equal(p1, p2) == 1)
		printf("(%d, %d) == (%d, %d)", p1->x, p1->y, p2->x, p2->y);
	else
		printf("(%d, %d) != (%d, %d)", p1->x, p1->y, p2->x, p2->y);
}