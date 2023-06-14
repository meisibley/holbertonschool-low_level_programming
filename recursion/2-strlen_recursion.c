#include "main.h"

/**
 * _strlen_recursion - a function returns the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	s++;
	_strlen_recursion(s);
	len++;
}
