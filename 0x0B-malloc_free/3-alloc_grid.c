#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-D array
 * @height: number of rows
 * @width: number of columns
 *
 * Return: pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * (sizeof(int *)));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * (sizeof(int *)));
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
