#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: concat first n bytes of s2 to s1
 * Return: a pointer points to a newly allocated space which concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *cc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len2 < n)
		n = len2;
	cc = malloc(sizeof(char) * (len1 + n + 1));
	if (cc == NULL)
	{
		free(cc);
		return (NULL);
	}
	strcpy(cc, s1);
	strncat(cc, s2, n);
	return (cc);
}
