#include <stdio.h>
/**
 * main - prints all single digit numbers, only use putchar, starting from 0
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
