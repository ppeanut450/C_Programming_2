// a
#include <stdio.h>
#define DEBUG

double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
	{
#ifdef DEBUG
		printf("result = %lf\n", result);
#endif
		result *= x;
	}
	return result;
}

int main(void)
{
	int x = 3, y = 5;
	power(x, y);
	return 0;
}



// b
#include <stdio.h>
#define DEBUG 0

double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
	{
#if (DEBUG == 2)
		printf("result = %lf\n", result);
#endif
		result *= x;
	}
	return result;
}

int main(void)
{
	int x = 3, y = 5;
	power(x, y);
	return 0;
}



// c
#include <stdio.h>
#define DEBUG 2
#define LEVEL 3

double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
	{
#if (DEBUG == 2 && LEVEL == 3)
		printf("result = %lf\n", result);
#endif
		result *= x;
	}
	return result;
}

int main(void)
{
	int x = 3, y = 5;
	power(x, y);
	return 0;
}



// d
#include <stdio.h>
#define DEBUG

double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
	{
		printf("result = %lf 현재 행 번호 = %d\n", result, __LINE__);
		result *= x;
	}
	return result;
}

int main(void)
{
	int x = 3, y = 5;
	power(x, y);
	return 0;
}



// e
#include <stdio.h>
#define DEBUG
#define POWER_TYPE 0

double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
	{
#if (POWER_TYPE == 0)
		printf("result = %d\n", (int)result);
#else
		printf("result = %lf\n", result);
#endif
		result *= x;
	}
	return result;
}

int main(void)
{
	int x = 3, y = 5;
	power(x, y);
	return 0;
}



// f
#include <stdio.h>
#define DEBUG 0

double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
	{
#if (DEBUG == 1)
		printf("result = %lf\n", result);
#endif
		result *= x;
	}
	return result;
}

int main(void)
{
	int x = 3, y = 5;
	power(x, y);
	return 0;
}