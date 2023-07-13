#include "main.h"

/**
 * print_binary - call a sub function to prints the binary number
 * @n: input number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + 48);
}
