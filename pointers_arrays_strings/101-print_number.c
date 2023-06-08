#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: input integer
 */
void print_number(int n)
{
	int i, flag = 0;

	if (n == 0)
		_putchar(0 + '0');
	else if (n < 0)
	{
		_putchar('-'), n = n * (-1);
	}
	if (n <= 2147483647)
	{
		for (i = 1000000000; i > 0; i = i / 10)
		{
			if ((n / i) > 0)
				flag = 1;
			if (flag != 0)
				_putchar((n / i) + '0');
			n = n - (n / i) * i;
		}
	}
	else if (n > 2147483647)
	{
		_putchar(2 + '0');
		_putchar(1 + '0');
		_putchar(4 + '0');
		_putchar(7 + '0');
		_putchar(4 + '0');
		_putchar(8 + '0');
		_putchar(3 + '0');
		_putchar(6 + '0');
		_putchar(4 + '0');
		_putchar(8 + '0');
	}
}
