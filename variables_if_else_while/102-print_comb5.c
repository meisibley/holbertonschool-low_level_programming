#include <stdio.h>
/**
 * main - prints all possible diff comb of two two-digis numbers
 *
 * Return: 0 for success
 */

int main(void)
{
	int i, j, m, n, s1, s2;

	for (i = 0; i <= 9; i++)
	for (j = 0; j <= 8; j++)
	for (m = i; m <= 9; m++)
	for (n = 0; n <= 9; n++)
	{
		s1 = i * 10 + j;
		s2 = m * 10 + n;
		if (s1 < s2)
		{
			putchar(48 + i);
			putchar(48 + j);
			putchar(' ');
			putchar(48 + m);
			putchar(48 + n);
			if (s1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
