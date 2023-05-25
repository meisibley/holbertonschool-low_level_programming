#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
