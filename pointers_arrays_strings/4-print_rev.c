#include "main.h"

/**
 * print_rev - a function prints a string, in reverse
 * @s: input string
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}	
