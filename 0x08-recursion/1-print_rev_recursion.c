#include "main.h"

/**
 * _print_reverse_recursion - functions that prints a string
 * in reverse using recursion
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void _print_reverse_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_reverse_recursion(s + 1);
		_putchar(*s);
	}
}
