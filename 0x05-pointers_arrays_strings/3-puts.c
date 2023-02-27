#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str - character pointer value
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str);
	}
	_putchar('\n');
}
