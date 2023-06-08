#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: a giving string
 * @c: the giving character
 * Return: a pointer to the first char c in the string
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] <= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
