#include "main.h"

/**
 * print_sign - check if input is a positive, negtive or zero number
 * @n: number for check
 * Return: positive returns 1 and prints +; negtive -1 and -; zero 0 and 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
