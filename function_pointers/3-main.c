#include "3-calc.h"
#include <string.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int res;
	int (*oppo)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oppo = (*get_op_func(argv[2]));
	if (!oppo || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
