#include "main.h"

/**
 * puts2 - print one char out of 2 of a string starting from the first value
 * @str: character array string type
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
