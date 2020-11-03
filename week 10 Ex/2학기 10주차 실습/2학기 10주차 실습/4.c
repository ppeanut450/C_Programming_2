#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* list[10];
	for (int i = 0; i < 10; i++)
	{
		list[i] = (char*)malloc(100 * sizeof(char));
		if (list[i] == NULL)
		{
			printf("malloc() 실패!\n\n");
			exit(1);
		}
		strcpy_s(list[i], 12, "test string");
	}
	for (int i = 0; i < 10; i++)
	{
		printf("문자열 %d: %s\n", i, list[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		free(list[i]);
	}
	return 0;
}