#include "main.h"

/**
 * _puts_recursion -function that prints a string follows by a new line
 * @s: string char to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
		_putchar(*s);
	_puts_recursion(s + 1);
}
