#include "main.h"

/**
 * puts_half - function that print half of a string
 * @str: String array to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
		;

	i++;
	for (i /= 2; *str != '\0'; i++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
