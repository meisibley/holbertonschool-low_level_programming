#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: a given number
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (n % 4 != 0 || n % 9 != 0 || n % 25 != 0 || n % 49 != 0)
		return (-1);
	else if (n / 4 == 0)
	{
		n = n / 4;
		return (2 * _sqrt_recursion(n));
	}
	else if (n / 9 == 0)
	{
		n = n / 9;
		return (3 * _sqrt_recursion(n));
	}
	else if (n / 25 == 0)
	{
		n = n / 25;
		return (5 * _sqrt_recursion(n));
	}
	else if (n / 49 == 0)
	{
		n = n / 49;
		return (7 * _sqrt_recursion(n));
	}
	else if (n / 121)
	{
		n = n / 121;
		return (11 * _sqrt_recursion(n));
	}
	else
}
