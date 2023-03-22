#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as parameter
 * on each element of an array
 * @array: array, @size: array size
 * @action: function pointer to functions given as parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
