#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the first input string
 * @src: the second input string
 * @n: use 2nd string's n digits to replace 1st string
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n > 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
