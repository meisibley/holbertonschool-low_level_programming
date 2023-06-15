#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: length of argv[]
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}
