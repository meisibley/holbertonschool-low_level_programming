#include "variadic_functions.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arg;
	va_list ap;

	if (separator == NULL)
		separator = "";
	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			arg = va_arg(ap, char*);
			if (arg == NULL)
				arg = "(nil)";
			if (i == n - 1)
				printf("%s\n", arg);
			else
				printf("%s%s", arg, separator);
		}
	}
	else
		printf("\n");
}

