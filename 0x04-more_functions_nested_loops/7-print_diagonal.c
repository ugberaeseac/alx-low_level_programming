#include "main.h"

/**
 * print_diagonal - print character ""\" n times
 * @n: number of characters to draw
 *
 * Return:
 */

void print_diagonal(int n)
{
	int drw;
	int spc;

	if (n > 0)
	{
		for (drw = 1; drw <= n; drw++)
		{
			for (spc = 1; spc < drw; spc++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
