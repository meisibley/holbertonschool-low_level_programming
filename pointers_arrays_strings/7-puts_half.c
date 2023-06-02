#include "main.h"

/**
 * puts_half - prints second half of the string
 * @str: input string
 */
void puts_half(char *str)
{
	int i, n = 0, m = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	n--;
	if (n > 1)
	{
		m = n / 2 + 1;
		for (i = m; i <= n; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
