#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where the value is located if success
 * otherwise -1 if array is NULL or value not found
 */
int binary_search(int *array, size_t size, int value)
{
	int lowBound, midBound, upperBound;
	int i;

	lowBound = 0;
	upperBound = size - 1;

	if (array == NULL)
		return (-1);

	while (lowBound < upperBound)
	{
		printf("Searching in array: ");
		for (i = 0; i < upperBound; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[upperBound]);
		midBound = (lowBound + upperBound) / 2;
		if (value > midBound)
			lowBound = midBound + 1;
		else if (value < midBound)
			upperBound = midBound - 1;
		else
			return (midBound);
	}
	return (-1);

}
