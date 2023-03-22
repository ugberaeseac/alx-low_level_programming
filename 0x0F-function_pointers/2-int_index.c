#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: index if integer found, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
		else
			return (-1);
	}
}
