#include <stdio.h>
void set_pointer(char** q);
int main(void)
{
	char* p;
	set_pointer(&p);

	printf("오늘의 격언: %s \n", p);
	return 0;
}

void set_pointer(char** q)
{
	*q = "All that glisters is not gold.";
}