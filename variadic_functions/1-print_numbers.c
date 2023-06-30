#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Noting.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(ap, n);
	if (n == 0)
		printf("\n");
	else
	{
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	}
	va_end(ap);
}
