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
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
