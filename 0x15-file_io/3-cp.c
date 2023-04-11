#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int count;

	count = close(fd);

	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - the begining of execution
 * @argc: the argument count number.
 * @argv: array holding the arguments
 *
 * Return : 0 if succes.
 */
int main(int argc, char *argv[])
{
        int fd, fd1, count, nread;
        char buffer[1024];

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit (97);
        }


        fd = open(argv[1], O_RDONLY);
        if (fd == -1 || !argv[1])
        {
                dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
                exit (98);
        }

        fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

        while ((nread = read(fd, buffer, sizeof(buffer))) > 0 )
        {
                count = write(fd1, buffer, nread);
                if (count == -1 || fd1 == -1 || !argv[2])
                        {
                                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                                exit (99);
                        }
        }
        close(fd);
        close(fd1);
        return (0);
}
