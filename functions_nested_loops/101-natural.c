#include <stdio.h>

/**
 * main - natural number
 * Return: Always 0
 */

int main(void)
{
	int i, j, n, m, s3, s51, s52, t;

	n = 1024 / 3;
	m = 1024 / 5;
	s3 = 0;
	s51 = 0;
	s52 = 0;
	for (i = 1; i <= n; i++)
		s3 += i * 3;
	for (j = 1; j <= m; j++)
	{
		s51 = j * 5;
		if ((s51 % 15) != 0)
			s52 += s51;
	}
	t = s3 + s52;
	printf("%d\n", t);
	return (0);
}
