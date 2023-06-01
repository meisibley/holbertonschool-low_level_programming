#include "main.h"

/**
 * print_number - a function prints an integer
 * print_posi_num - only prints positive integer
 * @n: input number
 * Return: no return
 */
void print_number(int n)
{
	int i, j;
	int flag = 0;


	if (n == 0)
		_putchar(0 + '0');
	else if (n < 0)
	{
		n = -n;
		_putchar('-');

		for (i = 1000; i > 0; i = i / 10)
		{
			j = n / i;
			if (j != 0)
				flag = 1;

			if (j != 0 || flag == 1)
				_putchar(j + '0');
			n = n - (n / i) * i;
		}
	}
	else if (n > 0)
		for (i = 1000; i > 0; i = i / 10)
		{
			j = n / i;
			if (j != 0)
				flag = 1;

			if (j != 0 || flag == 1)
				_putchar(j + '0');
			n = n - (n / i) * i;
		}
}
