#include <stdio.h>
#include <string.h>
void sort_strings(char* s[], int size)
{
	int i, j, least;
	char* temp;

	for (i = 0; i < size - 1; i++)
	{
		least = i;
		for (j = i + 1; j < size; j++)
		{
			if (strcmp(s[j], s[least]) < 0)
				least = j;
		}
		temp = s[i];
		s[i] = s[least];
		s[least] = temp;
	}
} 

int main(void)
{
	const char* s[] = {
		"mycopy",
		"src",
		"dst"
	};
	sort_strings(s, 3);
	
	for (int i = 0; i < 3; i++)
		printf("%s\n", s[i]);

	return 0;
}