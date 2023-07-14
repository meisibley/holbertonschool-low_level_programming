#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: a given long integer value
 * @index: the index points the bit
 *
 * Return: The value of the bit at the index pointed, or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
