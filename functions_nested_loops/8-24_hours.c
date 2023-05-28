#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * @h: hour number
 * @h1: first digit of hour number
 * @h2: second digit of hour number
 * @m: minute number
 * @m1: first digit of minute number
 * @m2: second digit of minute number
 * Return: from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h, h1, h2, m, m1, m2;

	for (h = 0; h <= 23; h++)
	for (m = 0; m <= 59; m++)
	{
		if (h <= 9)
		{
			h1 = 0;
			h2 = h;
		}
		else
		{
			h1 = h / 10;
			h2 = h % 10;
		}
		if (m <= 9)
		{
			m1 = 0;
			m2 = m;
		}
		else
		{
			m1 = m / 10;
			m2 = m % 10;
		}
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
	}
}
