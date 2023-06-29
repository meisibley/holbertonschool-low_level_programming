#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: input array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for the cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			index++;
	}
	if (index == 0)
		return (-1);
	else
		return (index);
}
