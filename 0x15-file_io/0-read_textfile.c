#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to POSIX standard output
 * @filename: file to read
 * @letters: number of characters to read and print
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buf;
	ssize_t readret, writeret;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buf = malloc((sizeof(char) * letters));
	if (buf == NULL)
		return (0);

	readret = read(fp, buf, letters);
	if (readret == -1)
	{
		free(buf);
		close(fp);
		return (0);
	}

	writeret = write(STDOUT_FILENO, buf, readret);
	if (writeret == -1)
	{
		free(buf);
		close(fp);
		return (0);
	}


	close(fp);
	return (readret);
}
