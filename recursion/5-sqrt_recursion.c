#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: a given number
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	return (calsqrt(n, 0));
}

/**
 * calsqrt - use recursion to calculate square root
 * @n: origin number
 * @r: result
 * Return: result
 */
int calsqrt(int n, int r)
{
	if (n < 0 || r == n)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (r * r == n)
		return (r);
	return (calsqrt(n, r + 1));
}
