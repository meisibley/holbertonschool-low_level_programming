#include "main.h"
#include <stdio.h>

/**
 * _memset(char *s, char b, unsigned int n)
 * @s: a pointer points a memory area
 * @b: the byte to fill a cercen area of memory s
 * @n: the length of filling
 * Return: renewed memory s pointed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
