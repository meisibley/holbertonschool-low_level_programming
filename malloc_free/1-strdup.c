#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a new space contains a copy of string
 * @str: a given string
 * Return: a pointer if success, NULL if str is NULL
 */
char *_strdup(char *str)
{
	int i, s = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s++;
	s++;
	dup = malloc(sizeof(char) * s);
	if (dup == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	return (dup);
}
