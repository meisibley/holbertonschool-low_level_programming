#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: the lengh of the line
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
