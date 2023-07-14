#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: given value
 * @index: given index should set 0
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
