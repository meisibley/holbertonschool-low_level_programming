#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337
 * @s: input string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	char *A = "AEOTL", *a = "aeotl", *n = "43071";

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == A[j] || s[i] == a[j])
				s[i] = n[j];
		}
		i++;
	}
	return (s);
}
