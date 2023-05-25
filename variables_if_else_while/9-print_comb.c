#include <stdio.h>
/**
 * main - prints all prossible combinations of-digit numbers, separated by ","
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar(i);
		if (i < 9)
		putchar(',');
	}
	putchar('\n');
	return (0);
}
