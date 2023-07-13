#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to string of 0 and 1 chars
 *
 * Return: converted number, 0 if there is not 0 or 1 char in string, or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	long int result, two = 1;
	int i, j, k, len, flag = 0;
	char *bb;

	if (b == NULL)
		return (0);
	result = 0;
	bb = malloc(sizeof(b + 1));
	{
		if (bb == NULL)
			return (0);
	}
	for (i = 0, j = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1' && flag == 0)
			flag++;
		if (flag > 0)
		{
			bb[j] = b[i];
			j++;
		}
	}
	len = j;
	if (bb[len - 1] == '1')
		result = 1;
	else
		result = 0;
	for (i = len - 2, j = 1; i >= 0; i--, j++)
	{
		if (bb[i] == '1')
		{
			for (k = 1; k <= j; k++)
				two *= 2;
			result += two;
		}
		two = 1;
	}
	free(bb);
	return (result);
}
