#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multi - multiply one number with one digit
 * @len: the length of m1
 * @m1: number one in string form
 * @m2: one digit in character form
 * Return: one number in string form
 */
char *multi(int len, char *m1, char m2)
{
	int i, r = 0, n, n1, n2;
	char *nm;

	if (m2 < 48 || m2 > 57)
	{
		printf("Error m2=%c\n", m2);
		exit(98);
	}
	n2 = m2 - 48;
	nm = malloc(sizeof(char) * len + 1);
	{
		if (nm == NULL)
			free(nm);
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (m1[i] < 48 || m1[i] > 57)
		{
			exit(98);
		}
		n1 = m1[i] - 48;
		n = n1 * n2 + r;
		r = n / 10;	
		n = n % 10;
		nm[i + 1] = n + 48;
	}
	if (nm[0] <= 48 || nm[0] > 57)
	{
		for (i = 0; i < len; i++)
		{
			nm[i] = nm[i + 1];
		}
		nm[len] = '\0';
	}
	printf("mul=%s\n", nm);
	return (nm);	
}
/**
 * addi - add two numbers
 * @tt: result of the addition
 * @m: addition number
 * Return: result of addition
 */
char *addi(char *tt, char *m)
{
	int i, j, len1, len2, r = 0, n, n1, n2, flag = 0;

	len1 = strlen(tt);
	len2 = strlen(m);
	printf("tt=%s m=%s\n", tt, m);
	for (i = 0; i < len1; i++)
	{
		if (tt[i] != 48)
			flag = 1;
	}
	for (i = len1 - 1, j = len2; i >= 0 && j >= 0; i--, j--)
	{
	printf("i=%d j=%d\n", i, j);
		if (j == len2 && flag == 1)
			n = tt[len1 - 1];
		else
		{
			if (i >= 0 && j < 0)
				n = tt[i] - 48 + r;
			else
			{
				n2 = m[j] - 48;
				n1 = tt[i] - 48;
				n = n1 + n2 + r;
				printf("n2=%d n1=%d n=%d r=%d\n", n2, n1, n, r);
			}
		}
	printf("n=%d\n", n);
		r = n / 10;
		n = n % 10;
	printf("n=%d r=%d\n", n, r);
		tt[i + 1] = n + 48;
		tt[i] = r + 48;
	printf("tt=%s\n", tt);
	}
	if (tt[0] <= 48 || tt[0] > 57)
	{
		for (i = 0; i < len1; i++)
		{
			tt[i] = tt[i + 1];
		}
		tt[i] = '\0';
	}
	printf("tt=%s\n", tt);
	return (tt);
}

/**
 * main - multiplies two positive numbers
 * @argc - numbers if arguments
 * @argv - arguments array
 * Return: 0 for success
 */
int main (int argc, char *argv[])
{
	int i, j, len1, len2;
	char *m, *tt;

	if (argc != 3)
	{
		printf("Error argc=%d\n", argc);
		exit(98);
	}
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	if (len1 > len2)
		m = malloc(sizeof(char) * len1 + 1);
	else
		m = malloc(sizeof(char) * len2 + 1);
	if (m == NULL)
	{
		free(m);
		return (1);
	}
	tt = malloc(sizeof(char) * len1 * len2 + 1);
	if (tt == NULL)
	{
		free(tt);
		return (1);
	}
	else
	{
		for (i = 0; i <= len1 * len2; i++)
			tt[i] = 48;
		tt[i] = '\0';
	}
	for (j = len2 - 1; j >= 0; j--)
	{
		m = multi(len1, argv[1], argv[2][j]);
		tt = addi(tt, m); 
	}
	len1 = strlen(tt);
	for (i = 0; i < len1; i++)
		_putchar(tt[i]);
	free(m);
	free(tt);
	return (0);
}
