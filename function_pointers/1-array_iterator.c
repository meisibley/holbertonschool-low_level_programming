#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a para on each elem of arr
 * @array: array will print each element
 * @size: size of this array
 * @action: a pointer to the functions
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
