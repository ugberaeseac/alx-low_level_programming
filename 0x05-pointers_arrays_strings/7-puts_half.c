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
	int j = 0;
	int k;

	while (*str != '\0')
	{
		i++;
		++str;
	}
	k = i / 2;
	while (j <= k)
	{
		_putchar(*str);
		j++;
		str++;
	}
	_putchar('\n');
}
