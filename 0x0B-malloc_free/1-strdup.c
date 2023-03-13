#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	int i, j;
	int length = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	ptr = (char *)malloc(length * (sizeof(char)));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < length; j++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
