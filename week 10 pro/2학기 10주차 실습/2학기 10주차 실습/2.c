#include <stdio.h>
int main(void)
{
	int n, i;
	char* A;
	printf("���ڿ��� ����: ");
	scanf_s("%d", &n);

	char** A = NULL;
	if (A = malloc(n * sizeof(char*)) != NULL)
	{
		printf("[ ");
		for (i = 0; i < n; i++)
		{
			A[i] = (char*)malloc(100);
			printf("\"���ڿ� %d\"", i);
		}
		printf(" ]");
	}

	return 0;
	
}