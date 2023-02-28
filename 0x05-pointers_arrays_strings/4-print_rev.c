#include "main.h"

/**
 * print_rev - function that print a string in reverse
 * @s: String array to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		++s;
	}
	s--;
	j = i;
	while (j > 0)
	{
		_putchar(*s);
		j--;
	}
	_putchar('\n');
}
