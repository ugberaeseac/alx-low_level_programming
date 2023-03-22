#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * on each element of the array
 * @array: array
 * @size: size of the array
 * @action: function pointer that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
