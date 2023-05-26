#include "main.h"

/**
 * print_alphabet - prints the alphabet, using _putchar only
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
