#include <stdio.h>
/**
 * main - prints all the alphabet in lowercase except q and e
 *
 * Return: 0 for success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
