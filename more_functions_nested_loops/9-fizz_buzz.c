#include <stdio.h>

/**
 * main - print 1 to 100, can be divided by 3 Fizz, by 5 Buzz, by 15 FizzBuzz
 *
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz ");
		else if ((i % 3) != 0 && (i % 5) == 0)
			printf("Buzz ");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
