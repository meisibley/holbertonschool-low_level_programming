#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int r, fdfr, fdto; /* Declaration of file descriptors */
	char buf[BFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdfr = open(argv[1], O_RDONLY); /*open file_from*/
	if (fdfr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fdfr);
		exit(98);
	}
	fdto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664); /*open file_to*/
	if (fdto < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fdfr), close(fdto);
		exit(99);
	}
	while ((r = read(fdfr, buf, BFSIZE)) > 0)
	{
		if (write(fdto, buf, r) != r) /*write to file_to*/
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdfr), close(fdto);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fdfr) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	if (close(fdto) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
