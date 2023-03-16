#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: mininum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(max * (sizeof(int)));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min, min <= max; min++)
	{
		ptr[i] = i;
	}

	return (ptr);
	free(ptr);
}
