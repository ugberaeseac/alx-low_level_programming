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
	int lowBound = 0;
	int step, i;
	int j;

	if (!array)
		return (-1);

	step = sqrt(size);

	for (i = 0; i < (int)size && array[i] < value; i += step)
	{
		printf("Value checked array[%d] = [%d]\n", i, i);
		if (array[i] == value)
			return (i);
		lowBound = i;
	}
	printf("value found between indexes [%d] and [%d]\n", lowBound, i);

	for (j = lowBound; j < (int)size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, j);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
