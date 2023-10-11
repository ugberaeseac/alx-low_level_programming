#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: index where the value is located if success
 * otherwise -1 if array is NULL or value not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lowBound = 0;
	size_t step, i;
	size_t j;

	if (!array)
		return (-1);

	step = sqrt(size);

	for (i = 0; i < size - 1; i += step)
	{
		if (array[i] < value)
			lowBound = i;
		if (array[i] >= value)
		{
			printf("value found between indexes [%ld] and [%ld]\n", lowBound, i);
			break;
		}
		printf("Value checked array[%ld] = [%ld]\n", i, i);
	}

	for (j = lowBound; j <= size - 1; j++)
	{
		printf("Value checked array[%ld] = [%ld]\n", j, j);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
