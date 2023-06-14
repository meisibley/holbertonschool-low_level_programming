#include "main.h"

/**
 * is_prime_number - check if the input integer is a prime number
 * @n: input number
 * Return: 1 if it's a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	else
		return (pri_num(n, 2));
}

/**
 * pri_num - use recursion to check if it's a prime number
 * @n: origin number
 * @i: check number
 * Return: 1 or 0;
 */
int pri_num(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
		i++;
		return (pri_num(n, i));
		}
	}
	else
		return (1);
}
