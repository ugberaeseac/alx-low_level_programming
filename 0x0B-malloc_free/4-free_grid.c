#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2-D grid
 * previously created by the alloc_grid function
 * @grid: pointer t 2-D array
 * @height: number of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid;
}
