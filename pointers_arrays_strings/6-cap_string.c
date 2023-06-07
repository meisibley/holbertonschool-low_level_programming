#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i = 0, flag = 0;

	if (i == 0 && str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			flag = 1;
		else if (str[i] == ',' || str[i] == ';' || str[i] == '.')
			flag = 1;
		else if (str[i] == '!' || str[i] == '?' || str[i] == '"')
			flag = 1;
		else if (str[i] == '(' || str[i] == ')' || str[i] == '{')
			flag = 1;
		else if (str[i] == '}')
			flag = 1;
		else
			flag = 0;
		i++;
		if (flag == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	str[i++] = '\0';
	return (str);
}
