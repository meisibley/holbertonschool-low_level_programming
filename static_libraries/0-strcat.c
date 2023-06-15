#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: input destination string
 * @src: input second string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
