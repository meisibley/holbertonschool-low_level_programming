#include <stdio.h>

/**
 * main - prints even fibonacci sequence, not exceed 4000000
 * Return: Always 0.
 */

int main(void)
{
	long int i, j, f, total;

	i = 1;
	f = 2;
	total = f;
	while (f <= 4000000)
	{
		j = i;
		i = f;
		f = f + j;
		if ((f % 2) == 0)
			total += f;
	}
	printf("%lu\n", total);
	return (0);
}
