#include "main.h"

/**
 * print_sign - check if input is a positive, negtive or zero number
 * @n: number for check
 * Return: positive returns 1 negtive -1 zero 0
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
