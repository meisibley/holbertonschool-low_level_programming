#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return a pointer to a new space contains a copy of string
 * @str: a given string
 * Return: a pointer if success, NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(char) * strlen(str));
	if (dup == 0)
		return (NULL);
	strcpy(dup, str);
	return (dup);
}
