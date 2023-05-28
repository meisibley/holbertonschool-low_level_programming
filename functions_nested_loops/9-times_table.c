#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 *
 * Return: no return
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	for (y = 0; y <= 9; y++)
	{
		if ((y > 0) && (y <= 9))
		{
			if ((x * y) > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}

		if ((x * y) <= 9)
		{
			_putchar((x * y) + '0');
		}
		else
		{
			_putchar(((x * y) / 10) + '0');
			_putchar(((x * y) % 10) + '0');
		}

		if (y == 9)
		{
			_putchar('\n');
		}
	}
}
