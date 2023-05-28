#include "main.h"

/**
 * _islower - returns 1 for c is lowercase check
 * @c: character for checking
 * Returns: if c is lowercase return 1; otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
