#include <stdio.h>
/**
 * main - prints all prossible combinations of-digit numbers, separated by ","
 *
 * Return: 0 for success
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
	{
		putchar(c);
		if (c < '9')
		putchar(',');
	}
	putchar('\n');
	return (0);
}
