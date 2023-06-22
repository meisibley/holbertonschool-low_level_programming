#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: element number of the array
 * @size: size of the type
 * Return: the point for the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = '\0';
	}
	return (p);
}
