#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: concat first n bytes of s2 to s1
 * Return: a pointer points to a newly allocated space which concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *cc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	cc = malloc(sizeof(char) * (i + n + 1));
	if (cc == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		cc[i] = s1[i];
	for (j = i; j < (n + i) && s2[j - i] != '\0'; j++)
		cc[j] = s2[j - i];
	cc[j] = '\0';
	return (cc);
}
