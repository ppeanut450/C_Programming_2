#include <stdio.h>
#include <stdlib.h>
#define ASSERT(exp)	{if (!(exp)) \
		{ printf("����("#exp")�� �ҽ����� %s %d��° �ٿ��� ����.\n"\
		, __FILE__, __LINE__), exit(1);}}

int main(void)
{
	int sum = 100;
	ASSERT(sum == 0);
	return 0;
}