#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: the text file
 * @letters: count of letters should read and print
 *
 * Return: count of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	size_t n, m, fd;

	if (filename == NULL)
		return (-1);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (!(fd))
	{
		free(buf);
		return (0);
	}
	n = read(fd, buf, letters);
	if (!(n))
	{
		free(buf);
		close(fd);
		return (0);
	}
	m = write(STDOUT_FILENO, buf, n);
	if (!(m))
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	free(buf);
	return (n);
}
