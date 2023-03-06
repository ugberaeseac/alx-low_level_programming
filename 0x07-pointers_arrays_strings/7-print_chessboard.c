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

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
