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
	int i = 0, j, w, h = 0;
	int *a;
	char **sa;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != 32)
		{
		for (j = 0;  str[i + j] != 32 && str[i + j] != '\0'; j++)
		{
		}
		a = malloc(sizeof(int) * j);
		if (a == NULL)
		{
			free(a);
			return (NULL);
		}
		a[h] = j;
		h++;
		i += j - 1;
		}
		i++;
	}
	sa = malloc(sizeof(char *) * h);
	if (sa == NULL)
	{
		free (sa);
		return (NULL);
	}
	i = 0, h = 0, w = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 32)
		{
		sa[w] = malloc(sizeof(char) * a[h]);
		if (sa[w] == NULL)
		{
			for (w--; w >= 0; w--)
				free(sa[w]);
			free(sa);
			return (NULL);
		}
		for (j = 0; j < a[h]; j++)
			sa[w][j] = str[i + j];
		w++, h++;
		i += a[h];
		}
		i++;
	}
	return (sa);
}
