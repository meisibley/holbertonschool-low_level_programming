#include <stdio.h>
/**
 * main - prints all possible different combinations of two different digis, w/o repeat
 *
 * Return: 0 for success
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; ++j)
	{
		if (i >= j)
			continue;
		else
		{
			putchar(48 + i);
			putchar(48 + j);
		}
		if ((i == 8) && (j == 9))
			continue;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
