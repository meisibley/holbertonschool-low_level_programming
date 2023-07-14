#include "main.h"

/**
 * flip_bits - returns number of bits need to flip to get from one to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits, or -1 for error
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, bits;

	bits = n^m;
	if (bits == 0)
		return (0);
	while (bits > 0)
	{
		bits = bits & (bits - 1);
		i++;
	}
	return (i);
}
