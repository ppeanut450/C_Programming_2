#include <stdio.h>
#define PI 3.141592
void circle(int r)
{
	printf("�� ����: %f", (double)r * (double)r * PI);	
}

void square(int len)
{
	printf("���簢�� ����: %d", len * len);
}

void rect(int w, int h)
{
	printf("���簢�� ����: %d", w * h);
}

int main(void)
{
	int num;
	int r, len, w, h;
	printf("���ϴ� ������ ��ȣ�� �����Ͻÿ�.\n");
	printf("1. ��, 2. ���簢��, 3. ���簢��\n");
	printf("���� ����: ");
	scanf_s("%d", &num);

	switch (num) {
		case 1:
			printf("�������� �Է��Ͻÿ�: ");
			scanf_s("%d", &r);
			circle(r);
			break;

		case 2:
			printf("���̸� �Է��Ͻÿ�: ");
			scanf_s("%d", &len);
			square(len);
			break;

		case 3:
			printf("���ο� ���θ� ������� �Է��Ͻÿ�: ");
			scanf_s("%d %d", &w, &h);
			rect(w, h);
			break;
	}

	return 0;
}