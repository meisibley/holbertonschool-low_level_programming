#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: Always 0.
 */
int main(argc, argv[])
{
	if (argc)
		printf ("%s\n", argv[0]);

	return (0);
}
