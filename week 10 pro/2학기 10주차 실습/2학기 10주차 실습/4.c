#include <stdio.h>
#include <stdlib.h>

char* get_word()
{
	char* s;
	s = (char*)malloc(50);
	if (s == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	printf("�ܾ �Է��Ͻÿ�(�ִ� 50����): ");
	scanf_s("%s", s, 50);
	return s;
}

int main(void)
{
	char* p;
	p = get_word();
	printf("���� �޸𸮿� ����� �ܾ�� %s�Դϴ�.", p);
	free(p);
	return 0;
}