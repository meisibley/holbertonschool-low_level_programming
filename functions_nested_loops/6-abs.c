#include "main.h"

/**
 * _abs - print the absolute value of an integer
 * @i: input integer
 * Return: positive 1, negtive -1 and 0 0
 */

int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (i * (-1));
	else
		return (0);
}
