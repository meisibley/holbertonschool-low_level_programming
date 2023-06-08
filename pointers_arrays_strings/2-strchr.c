#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: a giving string
 * @c: the giving character
 * Return: a pointer to the first char c in the string
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
