#include <stdio.h>
struct complex {
	double real;
	double ima;
} ;

struct complex add(struct complex c1, struct complex c2)
{
	struct complex result;
	
	result.real = c1.real + c2.real;
	result.ima = c1.ima + c2.ima;

	return result;
}

void print(struct complex c)
{
	printf("%lf + %lfi\n", c.real, c.ima);
}

int main(void)
{
	struct complex c1 = { 1, 2 };
	struct complex c2 = { 2, 3 };

	print(c1);
	print(c2);
	print(add(c1, c2));
}