#include "main.h"
#include <errno.h>
#include <string.h>

/**
 * main - copies the content of a file to another file
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int r, clsf, clst, fdfr, fdto; /* Declaration of file descriptors */
	char buf[BFSIZE];

	if (argc != 3)
	{
		dprintf(3, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fdfr = open(argv[1], O_RDONLY); /*open file_from*/
	if (fdfr < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fdfr);
		exit(98);
	}
	fdto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664); /*open file_to*/
	if (fdto < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fdfr), close(fdto);
		exit(99);
	}
	while ((r = read(fdfr, buf, BFSIZE)) > 0)
	{
		if (write(fdto, buf, r) != r) /*write to file_to*/
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fdfr), close(fdto);
			exit(99);
		}
	}
	clsf = close(fdfr), clst = close(fdto); /*close file descriptors*/
	if (clsf < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", clsf);
		exit(100);
	}
	if (clst < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", clst);
		exit(100);
	}
	return (0);
}
