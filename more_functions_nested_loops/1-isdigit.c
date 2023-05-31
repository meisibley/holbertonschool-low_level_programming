#include "main.h"

/**
 * _isdigit - a funcation that checks for a digit
 * @c: an input value
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
