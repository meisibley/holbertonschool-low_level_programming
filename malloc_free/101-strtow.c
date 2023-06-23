#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: input str
 * Return: a pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	int i = 0, j, k = 0;
	char **sa;

	if (str == NULL)
		return (NULL);

	sa = malloc(sizeof(char *) * strlen(str) + 1);
	if (sa == NULL)
	{
		free (sa);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
		for (j = 0;  str[i + j] != ' ' && str[i + j] != '\0'; j++)
		{
			sa[k][j] = str[i + j];
		}
		}
		i += j + 1;
		sa[k][j + 1] = '\0';
		k++;
	}

	return (sa);
}
