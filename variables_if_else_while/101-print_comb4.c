#include <stdio.h>
/**
 * main - prints all possible diff comb of three diff digis, w/o repeat
 *
 * Return: 0 for success
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
	for (j = i - 1; j <= 8; j++)
	{
	for (k = j - 1; k <= 9; k++)
	{
		if (k > j && j > i)
		{
			putchar(48 + i);
			putchar(48 + j);
			putchar(48 + k);
			if (i == 7 && j == 8 && k == 9)
				continue;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
