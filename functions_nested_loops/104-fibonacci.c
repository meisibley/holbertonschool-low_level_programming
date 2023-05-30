#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int j, k, f, j1, j2, k1, k2, f1, f2;

	j = 1;
	f = 2;
	printf("%lu, %lu, ", j, f);
	for (i = 1; i <= 90; i++)
	{
		k = j;
		j = f;
		f = k + f;
		printf("%lu, ", f);
	}
	for (i = 91; i <= 96; i++)
	{
		if (i == 91)
		{
			k1 = j / 10000;
			k2 = j % 10000;
			j1 = f / 10000;
			j2 = f % 10000;
		}
		else
		{
			k1 = j1;
			k2 = j2;
			j1 = f1;
			j2 = f2;
		}
		if ((k2 + j2) > 9999)
		{
			f1 = k1 + j1 + 1;
			f2 = (k2 + j2) % 10000;
		}
		else
		{
			f1 = k1 + j1;
			f2 = k2 + j2;
		}
		if (i != 96)
			printf("%lu%lu, ", f1, f2);
		else
			printf("%lu%lu", f1, f2);
	}
	printf("\n");
	return (0);
}
