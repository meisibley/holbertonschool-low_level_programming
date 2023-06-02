#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	int j = 0, len = 0;
	char swap;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (; j <= len; j++, len--)
	{
		swap = s[len];
		s[len] = s[j];
		s[j] = swap;
	}
}
