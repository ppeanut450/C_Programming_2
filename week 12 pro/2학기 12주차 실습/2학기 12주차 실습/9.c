#include <stdio.h>

char display_bit(char* c)
{
	int i;
	for (i = 0; c[i] != NULL; i++)
		printf("%c", c[i] ^ 0x20);
	return 0;
}

int main(void)
{
	char c[50];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf_s("%s", c, 50);

	printf("��� ���ڿ�: ");
	display_bit(c);

	return 0;
}