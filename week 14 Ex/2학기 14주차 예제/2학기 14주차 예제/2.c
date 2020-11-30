#include <stdio.h>
#define PI 3.141592
void circle(int r)
{
	printf("원 넓이: %f", (double)r * (double)r * PI);	
}

void square(int len)
{
	printf("정사각형 넓이: %d", len * len);
}

void rect(int w, int h)
{
	printf("직사각형 넓이: %d", w * h);
}

int main(void)
{
	int num;
	int r, len, w, h;
	printf("원하는 도형의 번호를 선택하시오.\n");
	printf("1. 원, 2. 정사각형, 3. 직사각형\n");
	printf("도형 선택: ");
	scanf_s("%d", &num);

	switch (num) {
		case 1:
			printf("반지름을 입력하시오: ");
			scanf_s("%d", &r);
			circle(r);
			break;

		case 2:
			printf("길이를 입력하시오: ");
			scanf_s("%d", &len);
			square(len);
			break;

		case 3:
			printf("가로와 세로를 순서대로 입력하시오: ");
			scanf_s("%d %d", &w, &h);
			rect(w, h);
			break;
	}

	return 0;
}