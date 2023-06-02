#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if (len % 2 == 0)
			_putchar(*str);
		len++;
		str++;
	}
	_putchar('\n');
}
