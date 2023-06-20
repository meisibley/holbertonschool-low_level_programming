#include "main.h"
#include <string.h>

/**
 * is_palindrome - check a string and see if it's a palindrome
 * @s: input string
 * Return: 1 if it's a palindrome string and 0 it's not
 */
int is_palindrome(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i <= len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}
	return (1);
}
