#include <stdio.h>

int main(void)
{
	char c[30] = { 0 };
	gets(c);
	for (int i = 0; c[i] <= NULL; i++)
		printf("%s", c[i]);
	printf("�� ");
	for (int i = 0; i < 30; i++)
	{
		c[i] = c[i] ^ @@@;
		printf("%c", c[i]);
	}
		
	printf("�� ���ڵ���");


}