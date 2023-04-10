#include "main.h"

/**
 * _error - function that prints error messages and exit with exit value
 * @fd: file descriptor
 * @err_code: error code
 * @str: a string containing the filename
 *
 * Return: Always 0 if success
 */
int _error(int fd, int err_code, char *str)
{
	if (err_code == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err_code);
	}
	else if (err_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(err_code);
	}
	else if (err_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(err_code);
	}
	else if (err_code == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(err_code);
	}

return (0);
}



/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 if success, if fail (97 - 100) exit values
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2;
	char buffer[1024];
	int read_f;
	int write_f;

	if (argc != 3)
		_error(0, 97, NULL);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		_error(0, 98, argv[1]);

	fd_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_2 == -1)
		_error(0, 99, argv[2]);


	while ((read_f = read(fd_1, buffer, 1024)) != 0)
	{

		read_f = read(fd_1, buffer, 1024);
		if (read_f == -1)
		{
			_error(0, 98, argv[1]);
		}
		write_f = write(fd_2, buffer, read_f);
		if (write_f == -1)
		{
			_error(0, 99, argv[2]);
		}
	}

	if (close(fd_1) == -1 || close(fd_2) == -1)
		_error(0, 100, NULL);

	close(fd_1);
	close(fd_2);

	return (0);
}


