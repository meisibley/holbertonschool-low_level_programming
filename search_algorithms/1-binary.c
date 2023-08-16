#include "search_algos.h"

/**
 * binary_search - It srches for a value in sorted array of int using B-search
 * @array: It's a pointer to the first element of the array to search in
 * @size: It's the number of elements in array
 * @value: The function will return the index where the value is located
 *
 * Return: The index for success, -1 for no success
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left = 0, m, right = (int)size - 1;

	if (array == NULL || size < 1)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	while (left <= right)
	{
		m = (left + right) / 2;
		if (array[m] == value)
		{
			return (m);
		}
		else
		{
			if (value > array[m])
				left = m + 1;
			else
				right = m - 1;
			if (left <= right)
			{
				printf("Searching in array: ");
				for (i = left; i < right; i++)
					printf("%d, ", array[i]);
				printf("%d\n", array[i]);
			}
		}
	}
	return (-1);
}
