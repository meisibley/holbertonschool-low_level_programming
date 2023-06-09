#include "main.h"
/**
 * infinite_add - a function that adds two numbers
 * @n1: 1st input number
 * @n2: 2nd input number
 * @r: buffer that the function will use to store result
 * @size_r: buffer size
 * Return: sum of those numbers or 0 as error
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, x = -1, carry = 0;

	for (i = size_r - 1; i >= 0; i--)
	{
	if ((n1[i] < 48 || n1[i] > 57) && (n2[i] < 48 || n2[i] > 57))
	{
		break;
	}
		if (carry > 0)
		{
			x = 1, carry = 0;
		}
		else
			x = 0;
	if ((n1[i] < 48 || n1[i] > 57) && (n2[i] >= 48 && n2[i] <= 57))
		x += (int)(n2[i]);
	else if ((n1[i] >= 48 && n1[i] <= 57) && (n2[i] < 48 || n2[i] > 57))
		x += (int)(n1[i]);
	else if ((n1[i] >= 48 && n1[i] <= 57) && (n2[i] >= 48 && n2[i] <= 57))
	{
		x += (int)(n1[i]) + (int)(n2[i]);
		if (x > 9)
		{
			carry = 1, x = x % 10;
		}
	}
		r[i] = (char)x;
	}
	if (x < 0)
		r = "0";
	return (r);
}
