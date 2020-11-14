#include <stdio.h>
#include "rect.h"
int main(void)
{
	RECT r = { 10, 10, 20, 20 };
	double area = 0.0;
	draw_rect(&r);
	move_rect(&r, 10, 20);
	draw_rect(&r);
	area = calc_area(&r);
	draw_rect(&r);
	return 0;
}