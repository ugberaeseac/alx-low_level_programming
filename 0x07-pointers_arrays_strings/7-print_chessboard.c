#include "main.h"

/**
 * print_chessboard - function to print chessboard given a set 2D array
 * @a: set of 2D array
 *
 * return: nothing
 */
void print_chessboard(char (*a)[8])
{

	int rows;
	int columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[rows][columns]);
		}
		_putchar('\n');
	}
}
