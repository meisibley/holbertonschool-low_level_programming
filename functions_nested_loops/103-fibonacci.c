#include <stdio.h>

/**
 * main - prints even fibonacci sequence, not exceed 4000000
 * Return: Always 0.
 */

int main(void)
{
	int e;
	long int i, j, f, total;

	i = 1;
	f = 2;
	total = f;
	while (f <= 4000000)
	{
		j = i;
		i = f;
		f = f + j;
		e = f % 10;
		if ((e % 2) == 0)
			total += total;
	}
	printf("%lu", total);
	return (0);
}
