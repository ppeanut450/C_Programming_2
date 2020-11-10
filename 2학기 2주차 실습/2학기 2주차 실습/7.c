#include <stdio.h>
int main(void)
{
	int i, j, k;

	for (i = 1; i <= 7; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);	
		}
		for (k = 7 - i; k >= 1; k--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}