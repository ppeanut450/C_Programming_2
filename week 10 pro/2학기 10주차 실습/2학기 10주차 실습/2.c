#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, i;
	
	printf("���ڿ��� ����: ");
	scanf_s("%d", &n);

	char** A = NULL;

	if ((A = malloc(n * sizeof(char*))) != NULL)
	{
		for (i = 0; i < n; i++)
			A[i] = (char*)malloc(100);
	}

	printf("[ ");

	for (i = 0; i < n; i++)
		printf("\"���ڿ� %d\" ", i);
	printf(" ]");

	free(A);
	return 0;	
}