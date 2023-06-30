#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int lfmt, i = 0, flag = 0;
	char *separator = "", *nilstr;
	va_list ap;

	va_start(ap, format);
	lfmt = strlen(format);
	while (i < lfmt)
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(ap, int));
			flag++;
			break;
		case 'i':
			printf("%s%d", separator, va_arg(ap, int));
			flag++;
			break;
		case 'f':
			printf("%s%f", separator, va_arg(ap, double));
			flag++;
			break;
		case 's':
			nilstr = va_arg(ap, char *);
			if (nilstr == NULL)
				printf("%snil", separator);
			else
				printf("%s%s", separator, nilstr);
			flag++;
			break;
		}
		if (flag > 0)
			separator = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
