#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0 for success.
 */
int main(void)
{
	int i, p1, p2;
	unsigned long int n = 612852475143;

	while (n % 2 == 0)
		n = n / 2;

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
			n = n / i;

		p1 = n, p2 = i;
	}

	if (p1 > p2)
		printf("%d\n", p1);
	else
		printf("%d\n", p2);

	return (0);
}
