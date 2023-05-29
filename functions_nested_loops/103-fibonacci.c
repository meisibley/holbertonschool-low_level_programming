#include <stdio.h>

/**
 * main - prints even fibonacci sequence, not exceed 4000000
 * Return: Always 0.
 */

int main(void)
{
	int e;
	long int i, j, f;

	i = 1;
	f = 2;
	printf("%lu, %lu", i, f);
	While (f <= 4000000)
	{
		printf(", ");
		j = i;
		i = f;
		f = f + j;
		e = f % 10;
		if ((e % 2) == 0)
			printf("%lu", f);
	}
}
