#include "main.h"
#include <string.h>
/**
 * cChar - compare the string's characters one by one
 * @s: input string
 * @len: length of the string
 * @j: an integer
 * Return: 1 for palindrome and 0 for not
 */
int cChar(char *s, int len, int j)
{
	if (j > len / 2)
		return (1);
	if (s[j - 1] == s[len - j])
		return (cChar(s, len, ++j));
	else
		return (0);
}

/**
 * is_palindrome - check a string and see if it's a palindrome
 * @s: input string
 * Return: 1 if it's a palindrome string and 0 it's not
 */
int is_palindrome(char *s)
{
	int i, len;

	len = strlen(s);
	i = cChar(s, len, 1);

	return (i);
}
