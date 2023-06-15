#include "main.h"
#include <limits.h>

/**
 * _atoi - a funtion that convert a string to an integer
 * @s: input string
 * Return: an integer.
 */
int _atoi(char *s)
{
	int i = 0, itg = 0, flag = 1, maxmin = 0;

	if (s[0] == '0')
		itg = 0;
	else
	{
	while ((s[i] != '\0') && itg == 0)
	{
		if (s[i] == 45)
			flag = flag * (-1);
		while (s[i] >= '0' && s[i] <= '9')
		{
			if (!(itg == 214748364 && (int)(s[i] - '0') == 8))
				itg = itg * 10 + (int)(s[i] - '0');
			else
				maxmin = 1;
			i++;
		}
		i++;
	}
	}
	if (maxmin != 1)
		return (itg * flag);
	else if (flag > 0)
		return (INT_MAX);
	else
		return (INT_MIN);
}
