#include <stdio.h>
struct shape {
	int type;
	union
	{
		struct { int base, height; } tri;
		struct { int width, height;  } rect;
		struct { int radius; } circ;
	} data;
};

int main(void)
{
	struct shape s;

	int area = 0;

	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2): ");
	scanf_s("%d", &s.type);
	printf("���ο� ������ ���̸� �Է��Ͻÿ�(���� �� 100 200): ");
	if (s.type == 0)
	{
		scanf_s("%d %d", &s.data.tri.base, &s.data.tri.height);
		area = s.data.tri.base * s.data.tri.height * 0.5;
	}
	else if (s.type == 1)
	{
		scanf_s("%d %d", &s.data.rect.width, &s.data.rect.height);
		area = s.data.rect.width * s.data.rect.height;
	}
	else if (s.type == 2)
	{
		scanf_s("%d", &s.data.circ.radius);
		area = s.data.circ.radius * s.data.circ.radius * 3.14;
	}
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");

	printf("������ %d", area);

	return 0;
}