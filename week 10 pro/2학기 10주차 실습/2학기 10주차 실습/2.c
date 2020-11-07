#include <stdio.h>
int main(void)
{
	int n, i;
	char* A;
	printf("문자열의 개수: ");
	scanf_s("%d", &n);

	char** A = NULL;
	if (A = malloc(n * sizeof(char*)) != NULL)
	{
		printf("[ ");
		for (i = 0; i < n; i++)
		{
			A[i] = (char*)malloc(100);
			printf("\"문자열 %d\"", i);
		}
		printf(" ]");
	}

	return 0;
	
}