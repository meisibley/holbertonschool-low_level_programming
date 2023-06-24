#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer points the old size memory and will point to new size memory
 * @old_size: old size memory
 * @new_size: new size memory
 * Return: pointer ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *nptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == 0)
	{
		free(nptr);
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		for (i = 0; i < new_size; i++)
		{
			nptr[i] = '0';
		}
		nptr[i] = '\0';
	}
	else
		nptr = (void *)ptr;
	free(ptr);
	return (nptr);
}
