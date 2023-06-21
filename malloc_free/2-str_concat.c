#include "main.h"
#include <stdlib.h>

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

	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
	}
	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
	}
	j = i1 + i2 + 1;
	cc = malloc(sizeof(char) * j);
	if (cc == NULL)
		return (NULL);

	for (j = 0; j < i1; j++)
		cc[j] = s1[j];
	for (i2 = 0; s2[i2] != '\0'; i2++)
		cc[j + i2] = s2[i2];

	return (cc);
}
