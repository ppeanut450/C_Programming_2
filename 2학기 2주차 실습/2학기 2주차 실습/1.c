#include <stdio.h>
int main(void)
{
	char color;

	printf("��ȣ���� ���� (R, G, Y): ");
	scanf_s(" %c", &color);

	switch (color) {
		case 'R':
		case 'r':
			printf("����!");
			break;

		case 'G':
		case 'g':
			printf("����!");
			break;

		case 'Y':
		case 'y':
			printf("����!");
			break;

		default:
			printf("�߸� �Է��ϼ̽��ϴ�.");
			break;
	}

	return 0;
}