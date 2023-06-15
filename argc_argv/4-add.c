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
	char *p;

	if (argc == 2)
		printf("%d\n", atoi(argv[1]));
	else if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			for (j = 0; p[j] != '\0'; j++)
			{
				if (p[j] < 48 || p[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
