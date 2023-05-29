#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 * @n: input times number
 * Return: no return
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		printf("\n");
	else
	{
		for (i = 0; i <= n; i++)
		{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else if ((i * j) < 10)
				printf(",   %d", i * j);
			else if (((i * j) >= 10) && ((i * j) < 100))
				printf(",  %d", i * j);
			else if (((i * j) >= 100) && ((i * j) < 1000))
				printf(", %d", i * j);
		}
		printf("\n");
		}
	}
}
