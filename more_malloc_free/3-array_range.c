#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the min number
 * @max: the max number
 * Return: a pointer to the new array
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == 0)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		a[i - min] = i;
	}
	return (a);
}
