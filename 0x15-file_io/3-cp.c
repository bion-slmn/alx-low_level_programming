#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - copies the content of a file to another file.
 * @ac:  counts the number argument passed
 * @av: contains the arguments passed
 *
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int to, from, nread, nwrite, closeto, closefrom;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(av[1], O_RDONLY);
	to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	nread = read(from, buffer, 1024);
	while (nread > 0)
	{
		nwrite = write(to, buffer, nread);
		nread = read(from, buffer, 1024);
	}
	if (from == -1 || nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (to == -1 || nwrite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	closeto = close(to);
	if (closeto == -1)
		closeError(to);
	closefrom = close(from);
	if (closefrom == -1)
		closeError(from);

	return (0);
}

/**
 * closeError - prints the error message if close fails
 * @fd: is the file descriptor
 *
 */
void closeError(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
