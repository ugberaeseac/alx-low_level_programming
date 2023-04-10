#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: string to write fo file
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i, strlength = 0;
	int write_n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[1] != '\0'; i++)
		strlength++;

	write_n = write(fd, text_content, strlength);
	if (write_n == -1)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	return (1);
}
