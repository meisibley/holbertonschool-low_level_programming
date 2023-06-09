#include "main.h"
#include <stdio.h>

/**
 * main - searches a string for any of a set of bytes
 *
 * Return: a pointer to the byte in s that matches one of accept bytes
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
