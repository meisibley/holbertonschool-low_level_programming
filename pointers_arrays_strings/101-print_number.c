#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: input integer
 */
void print_number(int n)
{
	int i, flag = 0;
	int intmax[] = {2, 1, 4, 7, 4, 8, 3, 6, 4, 8};

	if (n == 0)
		_putchar(0 + '0');
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n <= 2147483647)
	{
		for (i = 1000000000; i > 0; i = i / 10)
		{
			if ((n / i) > 0)
			{
				flag = 1;
			}
			if (flag != 0)
			{
				_putchar((n / i) + '0');
			}
			n = n - (n / i) * i;
		}
	}
	else
		for (i = 0; i < 10; i++)
			_putchar(intmax[i] + '0');
}
