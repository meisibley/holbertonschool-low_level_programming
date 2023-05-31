#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: the lengh of the diagonal
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n + 1; i++)
		{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
