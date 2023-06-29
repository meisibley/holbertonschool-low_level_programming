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
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));

#endif
