#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i;
	
	printf("문자열의 개수: ");
	scanf_s("%d", &n);

	char** A = NULL;

	if (A = malloc(n * sizeof(char*)) != NULL)
	{
		for (i = 0; i < n; i++)
			A[i] = (char*)malloc(100);
	}

	printf("[ ");

	for (i = 0; i < n; i++)
		printf("\"문자열 %d\"", i);
	printf(" ]");

	free(A);
	for (i = 0; i < n; i++)
	{
		free(A[i]);
	}

	return 0;	
}