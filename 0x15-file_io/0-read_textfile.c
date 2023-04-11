#include "main.h"
#include <stddef.h>
#include<fcntl.h>
#include<unistd.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints to standard output.
 * @filename: is the name of the file.
 * @letters: thr number of letters to be read.
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, nread;
	int fd;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nread = read(fd, buffer, letters);
	if (nread == -1)
		return (0);

	count = write(STDOUT_FILENO, buffer, nread);
	if (count == -1 || count != nread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (nread);
}
