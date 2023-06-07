#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @str: input string
 * Return: all uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
