#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 *
 * Return:
 */

void print_line(int n)
{
	int m = n;

	for (m = n; m > 0; m--)
		_putchar('_');

	_putchar('\n');
}
