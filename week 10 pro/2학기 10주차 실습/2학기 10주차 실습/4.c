#include <stdio.h>
#include <stdlib.h>

char* get_word()
{
	char* s;
	s = (char*)malloc(50);
	if (s == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	printf("단어를 입력하시오(최대 50글자): ");
	scanf_s("%s", s, 50);
	return s;
}

int main(void)
{
	char* p;
	p = get_word();
	printf("동적 메모리에 저장된 단어는 %s입니다.", p);
	free(p);
	return 0;
}