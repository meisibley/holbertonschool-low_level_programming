#include <stdio.h>

/**
 * main - prints the program name
 * @argc: size of array argv[]
 * @argv: arguments input from command line
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
