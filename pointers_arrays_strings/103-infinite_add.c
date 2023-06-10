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
	int i, j1 = 0, j2 = 0, max, carry = 0;
	for (i = 0; n1[i] != '\0'; i++)
		j1++;
	for (i = 0; n2[i] != '\0'; i++)
		j2++;
	if (j1 < j2)
		max = j2;
	else
		max = j1;
for (i = max - 1; i >= 0; i--)
{
	if ((n1[i] < 48 || n1[i] > 57) && (n2[i] < 48 || n2[i] > 57))
	{
		break;
	}
	if (carry > 0)
	{
		r[i] = 49, carry = 0;
	}
	else
		r[i] = 48;
	if ((n1[i] < 48 || n1[i] > 57) && (n2[i] >= 48 && n2[i] <= 57))
		r[i] += n2[i] - 48;
	else if ((n1[i] >= 48 && n1[i] <= 57) && (n2[i] < 48 || n2[i] > 57))
		r[i] += n1[i] - 48;
	else
	{
		r[i] += n1[i] + n2[i] - 96;
		if (r[i] > 57)
		{
			carry = 1, r[i] = r[i] - 10;
		}
	}
}
	if (carry > 0)
	{
		r[max + 1] = '\0';
		for (i = max; i > 0; i--)
			r[i] = r[i - 1];
		r[0] = 49;
	}
	else
		r[max] = '\0';
	if (j1 > size_r || j2 > size_r)
		r = 0;
	return (r);
}
