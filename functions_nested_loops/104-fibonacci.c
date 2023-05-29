#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int j, k, f;

	j = 1;
	f = 2;
	printf("%lu, %lu, ", j, f);
	for (i = 1; i <= 96; i++)
	{
		k = j;
		j = f;
		f = k + f;
		if (i != 96)
			printf("%lld, ", f);
		else
			printf("%lld", f);
	}
	printf("\n");
	return (0);
}
