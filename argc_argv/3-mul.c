#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = argv[1] * argv[2];
		printf("%d\n", sum);
		return (0);
	}
}
