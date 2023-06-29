#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * function_pointers - function pointers
 * print_name - print name
 * @name: name
 * @f: a function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *));

#endif
