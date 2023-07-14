#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a given value's pointer
 * @index: the index starting from 0 of the bit will be set
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
