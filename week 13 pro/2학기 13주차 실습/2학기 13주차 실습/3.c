#include <stdio.h>
double get_average(int list[], int n)
{
	double sum = 0.0;

	for (int i = 0; i < n; i++)
		sum += list[i];

	return sum / n;
}

int main(void)
{
	int scores[3][3] = {
		{ 100, 50, 0 },
		{ 20, 40, 60 },
		{ 45, 60, 75 } };

	for (int i = 0; i < 3; i++)
		printf("%dÇàÀÇ Æò±Õ°ª = %lf\n", i, get_average(scores[i], 3));

	return 0;

}