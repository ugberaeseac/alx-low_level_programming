#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to POSIX stdout
 * @filename: file to read
 * @letters: number of characters to read and print
 *
 * Return: actual number of letters read and then printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buffer = malloc((sizeof(char) * letters));
	if (buffer == NULL)
		return (0);

	n_read = read(fp, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}

	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}


	close(fp);
	return (n_read);
}
