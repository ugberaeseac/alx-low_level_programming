#include "main.h"

/**
 * print_alphabet - print lower case alphabet using _putchar
 * Return: Success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
