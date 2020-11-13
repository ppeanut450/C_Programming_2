#include <stdio.h>
#include <stdlib.h>
#define ASSERT(exp)	{if (!(exp)) \
		{ printf("가정("#exp")이 소스파일 %s %d번째 줄에서 실패.\n"\
		, __FILE__, __LINE__), exit(1);}}

int main(void)
{
	int sum = 100;
	ASSERT(sum == 0);
	return 0;
}