#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: operation sign
 * @a: first number
 * @b: second number
 * Return: a pointer to the correspond function
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
