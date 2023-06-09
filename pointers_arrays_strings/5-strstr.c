#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds 1st occurrence of needle in haystack
 * @haystack: the main string to be scanned
 * @needle: the small string to be searched in haystack
 * Return: pointer to the beginning of the located substring, NULL no found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, flag = 0;

	if (haystack[0] == '\0')
		return (NULL);
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] != needle[j])
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1, j++;
			}
		}
		if (flag != 0 && needle[j] == '\0')
		{
			return (haystack + i - j);
		}
		else
			i++;
	}
	return (NULL);
}
