#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * @a: an integer array
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
