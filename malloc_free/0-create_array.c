#include "main.h"

/**
 * create_array - creates an array of chars & initializes it w char c
 * @size: size of the array
 * @c: special character
 * Return: a character point
 */
char *creates_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (0);

	ar = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ar[i] = c;

	if (ar == NULL)
		return (NULL);
	return (ar);
}
