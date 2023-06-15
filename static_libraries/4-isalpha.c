#include "main.h"

/**
 * _isalpha - check if input c is an alphabet
 * @c: character for the check
 * Return: if c is a letter, return 1; otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
