#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POIMTERS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * function_pointers - function pointers
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *));

#endif
