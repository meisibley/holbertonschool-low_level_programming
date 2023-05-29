#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int j, k, f;

	j = 1;
	f = 2;
	printf("%lu, %lu, ", j, f);
	for (i = 1; i <= 48; i++)
	{
		k = j;
		j = f;
		f = k + f;
		if (i != 48)
			printf("%lu, ", f);
		else
			printf("%lu", f);
	}
	printf("\n");
	return (0);
}
