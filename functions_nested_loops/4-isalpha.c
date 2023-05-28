#include "main.h"

/**
 * _isalpha - check if input c is an alphabet
 *
 * Return: if c is a letter, return 1; otherwise return 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
