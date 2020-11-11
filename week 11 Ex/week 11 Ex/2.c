// 매크로 예제
#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main(void)
{
	int x = 2;
	printf("%d\n", SQUARE(x));
	printf("%d\n", SQUARE(3));
	printf("%f\n", SQUARE(1.2));  // 실수에도 적용 가능
	printf("%d\n", SQUARE(x + 3));
	printf("%d\n", 100 / SQUARE(x));  // 논리 오류
	printf("%d\n", SQUARE(++x));
	return 0;
}