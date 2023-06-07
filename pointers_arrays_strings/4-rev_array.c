#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print a reversed array of integer
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j = n, swp;

	for (i = 0, j = n - 1; i <= j; i++, j--)
	{
		swp = a[i];
		a[i] = a[j];
		a[j] = swp;
	}
}
