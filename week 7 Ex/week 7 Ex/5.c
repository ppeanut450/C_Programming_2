#include <stdio.h>
union example {
	int i;
	char c;
};

int main(void)
{
	union example v;
	v.c = 'A';
	printf("v.c: %c\n v.i:%d\n", v.c, v.i);
	v.i = 10000;
	printf("v.c: %c\n v.i:%d\n", v.c, v.i);

	return 0;
}