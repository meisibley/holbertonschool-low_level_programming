#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: destitional memory copying to
 * @src: copying memory area
 * @n: copying length
 * Return: the point of dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		if (i > 50 && i <= 50 + n)
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
