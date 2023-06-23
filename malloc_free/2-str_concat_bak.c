#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure, otherwise, cc
 */
char *str_concat(char *s1, char *s2)
{
	int i1, i2, j;
	char *cc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i1 = strlen(s1);
	i2 = strlen(s2);
	j = i1 + i2 + 1;
	cc = malloc(sizeof(char) * j);
	if (cc == NULL)
		return (NULL);

	strcpy(cc, s1);
	strcat(cc, s2);

	return (cc);
}
