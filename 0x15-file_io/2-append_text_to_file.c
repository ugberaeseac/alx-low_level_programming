#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file to append
 * @text_content: string to write fo file
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int strlength = 0;
	int n_write;

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

	while (text_content)
		strlength++;

	n_write = write(fd, text_content, strlength);
	if (n_write == -1 || n_write != strlength)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	return (1);
}
