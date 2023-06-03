#include "main.h"

/**
 * _atoi - a funtion that convert a string to an integer
 * @s: input string
 * Return: an integer.
 */
int _atoi(char *s)
{
	int i = 0, itg = 0, flag = 1;

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
			itg = itg * 10 + (int)(s[i] - '0');
			i++;
		}
		i++;
	}
	}
	return (itg * flag);
}
