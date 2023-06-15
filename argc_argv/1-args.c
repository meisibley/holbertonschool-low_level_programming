#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: length of argv[]
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%d\n", argc - 1);
	return 0;
}
