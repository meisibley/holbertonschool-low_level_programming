#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to string of 0 and 1 chars
 *
 * Return: converted number, 0 if there is not 0 or 1 char in string, or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	long int result = 0, bit;
	int i, j = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;
	for (; i >= 0; i--, j++)
	{
		if (b[i] == '0')
			bit = 0;
		else
			bit = 1;
		result = result + (bit << j);
	}
	return (result);
}
