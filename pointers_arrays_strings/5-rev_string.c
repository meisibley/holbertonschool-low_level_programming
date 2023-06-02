#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	int i = 0, j = 9;
	char s1[10];

	for (i = 0; i <= 9; i++)
	{
		s1[j] = s[i];
		j--;
	}
	for (i = 0; i <= 9; i++)
	{
		s[i] = s1[i + 1];
	}
}
