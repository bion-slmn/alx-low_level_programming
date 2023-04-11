#include "main.h"
#include <stddef.h>
#include<unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * strlength -length of string.
 * @str: is the string.
 *
 * Return: length
 */
int strlength(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		count = write(fd, text_content, strlength(text_content));

	if (count == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
