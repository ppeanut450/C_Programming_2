#include <stdio.h>
void pr_str_array(const char** dp)
{
	for (int i = 0; i < 5; i++)
		printf("%s\n", dp[i]);
}

int main(void)
{
	const char* array[5] = {
		"A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools.",
	};

	pr_str_array(array);

	return 0;
}