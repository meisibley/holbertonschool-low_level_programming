#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars & initializes it w char c
 * @size: size of the array
 * @c: special character
 * Return: a character point
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
