#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguemnts array
 * Return: 0 for sucess, 1 for error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 2 && atoi(argv[1]) >= 0)
		printf("%d\n", atoi(argv[1]));
	else if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
		if (argv[i][0] != 45)
		{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		}
		}
		printf("%d\n", sum);
	}
	return (0);
}
