#include "main.h"

/**
 * print_number - a function prints an integer
 * print_posi_num - only prints positive integer
 * @n: input number
 * Return: no return
 */
void print_number(int n)
{
	int i, j, j1, j2, n1, n2;
	int flag = 0;

	if (n == 0)
		_putchar(0 + '0');
	else if (n < 0 && n >= -2147483647)
	{
		n = -n;
		_putchar('-');

		for (i = 1000000000; i > 0; i = i / 10)
		{
			j = n / i;
			if (j != 0)
				flag = 1;

			if (j != 0 || flag == 1)
				_putchar(j + '0');
			n = n - (n / i) * i;
		}
	}
	else if (n > 0 && n <= 2147483647)
		for (i = 1000000000; i > 0; i = i / 10)
		{
			j = n / i;
			if (j != 0)
				flag = 1;

			if (j != 0 || flag == 1)
				_putchar(j + '0');
			n = n - (n / i) * i;
		}
	else if (n < -2147483647)
	{
		n1 = -n / 1000;
		n2 = -n % 1000;
		_putchar('-');

		for (i = 100000000; i > 0; i = i / 10)
		{
			j1 = n1 / i;
			if (j1 != 0)
				flag = 1;

			if (j1 != 0 || flag == 1)
				_putchar(j1 + '0');
			n1 = n1 - (n1 / i) * i;
		}
		for (i = 1000; i > 0; i = i / 10)
		{
			j2 = n2 / i;
			if (j2 != 0 || flag == 1)
				_putchar(j2 + '0');
			n2 = n2 - (n2 / i) * i;
		}
	}
	else if (n > 2147483647)
	{
		n1 = -n / 1000;
		n2 = -n % 1000;
		for (i = 1000000000; i > 0; i = i / 10)
		{
			j1 = n1 / i;
			if (j1 != 0)
				flag = 1;

			if (j1 != 0 || flag == 1)
				_putchar(j1 + '0');
			n1 = n1 - (n1 / i) * i;
		}
		for (i = 1000; i > 0; i = i / 10)
		{
			j2 = n2 / i;

			if (j2 != 0 || flag == 1)
				_putchar(j2 + '0');
			n2 = n2 - (n2 / i) * i;
		}
	}
}
