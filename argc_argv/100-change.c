#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum # of coins to make change for amount of money
 * @argc: 2
 * @argv: 2 only, first is excuable file, second is amount of money
 * Return: 0 negative amount of money, 1 wrong argc number, ttlc
 */
int main (int argc, char *argv[])
{
	int i, amt = 0, ttlc = 0;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		amt = atoi(argv[1]);
		for (i = 0; i < 4; i++)
		{
			if (amt >= coin[i])
			{
				ttlc += amt / coin[i];
				amt = amt % coin[i];
			}
		}
		ttlc += amt;
		printf("%d\n", ttlc);
		return (0);
	}
}
