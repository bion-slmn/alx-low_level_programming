#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: is the name of the file
 * @letters: s the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	nread = read(fd, buffer, letters);
	if (nread < 0)
		return (0);

	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite < 0 || nwrite < nread)
		return (0);

	free(buffer);
	return (nwrite);
}
