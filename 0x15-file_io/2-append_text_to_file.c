#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

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
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of file.
 * @text_content: s the NULL terminated string to add at the end
 *
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		count = write(fd, text_content, strlength(text_content));

	if (count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
