#include "main.h"

/**
 * _islower - returns 1 for c is lowercase check
 * @c: character for checking
 * Returns: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
