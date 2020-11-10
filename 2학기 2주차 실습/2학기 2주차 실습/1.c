#include <stdio.h>
int main(void)
{
	char color;

	printf("신호등의 색깔 (R, G, Y): ");
	scanf_s(" %c", &color);

	switch (color) {
		case 'R':
		case 'r':
			printf("정지!");
			break;

		case 'G':
		case 'g':
			printf("진행!");
			break;

		case 'Y':
		case 'y':
			printf("주의!");
			break;

		default:
			printf("잘못 입력하셨습니다.");
			break;
	}

	return 0;
}