#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: arguments count
 * @av: arguments grid
 * Return: all arguments
 */
char *argstostr(int ac, char **av)
{
	int i, len = 0;
	char *cc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	cc = malloc(sizeof(char) * len + 1);
	if (cc == NULL)
	{
		free(cc);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcat(cc, av[i]);
		strcat(cc, "\n");
	}
	return (cc);
}
