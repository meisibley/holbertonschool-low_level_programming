#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name
 * @f: a pointer points to function f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	(*f)(name);
}
