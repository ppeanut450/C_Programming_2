#include <stdio.h>
set_proverbs(char** q, int n)
{
	static char *array[] = { 
		 "A bad shearer never had a good sickle.",
		 "A bad workman (always) blames his tools.",
		 "A bad workman quarrels with his tools.",
		 "A bad thing never dies.",
		 "A bad workman finds fault with his tools.",
		 "A bad workman always blames his tools.",
		 "a bargain is a bargain.",
		 "A barking dog never bites.",
		 "Pie in the sky.",
		 "Two birds with one stone."
	};

	*q = array[n];

	return *q;
}

int main(void)
{
	int n;
	char* s = { 0 };
	

	printf("���° �Ӵ��� �����Ͻðڽ��ϱ�? ");
	scanf_s("%d", &n);

	printf("selected proverb = %s", set_proverbs(&s, n));

	return 0;
}