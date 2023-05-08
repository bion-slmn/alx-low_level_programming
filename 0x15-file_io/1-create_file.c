#include "main.h"

/**
 * create_file - creates a file.
 * @filename: is the name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nwrite, len = 0;

	len = strlength(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		nwrite = write(fd, text_content, len);
		if (nwrite < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
/**
 * strlength - calculates the lenght of string
 * @str: is the string
 *
 * Return: the length of the string
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
