#include "main.h"

/**
 * _strncat - concat two strings, 2nd string only include n digits
 * @dest: the first input string
 * @src: the second input string
 * @n: the digits of 2nd string should be concated
 * Return: concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	if (*src != '\0')
	{
		for (i = 0; i < n; i++)
		{
			dest[j + i] = src[i];
		}
	}
	dest[j + i] = '\0';
	return (dest);
}
