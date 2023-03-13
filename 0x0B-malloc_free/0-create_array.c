#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of char and
 * initializes it with a specific char
 * @size: size of array
 * @c: char to intialize the array with
 *
 * Return: Pointer to the array base address
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);
}
