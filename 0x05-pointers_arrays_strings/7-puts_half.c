#include "main.h"

/**
 * puts_half - function that print half of a string
 * @str: String array to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		++s;
	}
	s--;
	j = i / 2;
	while (j < i)
	{
		_putchar(*s);
		j--;
		s--;
	}
	_putchar('\n');
}
