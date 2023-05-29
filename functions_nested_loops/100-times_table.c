#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 * @n: input times number
 * Return: no return
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 4)
	{
		for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			if (j < n)
				printf("%d,   ", i * j);
			else
				printf("%d\n", i * j);
		}
	}
	if (n > 3 && n < 10)
	{
		for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else if ((i * j) < 10 && (j < n))
				printf(",   %d", i * j);
			else if ((i * j) >= 10 && (j < n))
				printf(",  %d", i * j);
			else if ((j == n) && (i * j) < 10)
				printf(",   %d\n", i * j);
			else if ((j == n) && (i * j) >= 10)
				printf(",  %d\n", i * j);
		}
	}
	if (n > 9 && n < 16)
	{
		for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			if (j < n)
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
			else if (j == n) 
				{
				if ((i * j) < 10)
					printf(",   %d\n", i * j);
				else if (((i * j) >= 10) && ((i * j) < 100))
					printf(",  %d\n", i * j);
				else if ((i * j) >= 100)
					printf(", %d\n", i * j);
				}
		}
	}
}
