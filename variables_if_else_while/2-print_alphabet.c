#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 for success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
