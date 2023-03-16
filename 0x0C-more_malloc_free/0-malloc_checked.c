#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void  *ptr;

	ptr = (unsigned int *)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
