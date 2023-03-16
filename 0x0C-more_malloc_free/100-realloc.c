#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: old size of memory allocated
 * @new_size: new size to reallocate
 *
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *ptr2;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		else
			return (ptr2);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i > old_size && i < new_size; i++)
	{
		((char *)ptr2)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (ptr2);
}


