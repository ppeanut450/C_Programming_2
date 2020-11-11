#include <stdio.h>
#define PRINT(exp) printf(#exp" = %d\n", exp);  // 집어넣은 변수 이름 출력
int main(void)
{
	int x = 5;
	
	PRINT(x);

	return 0;
}