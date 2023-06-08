#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string rot13.
 * @s: an input string
 * Return: a encoded/decoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char *dec = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *enc = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == dec[j])
			{
				s[i] = enc[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
