#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * the returned pointer points to a newly allocated memory space
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, s1length = 0, s2length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1length++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s2length++;
	}

	ptr = (char *)malloc((s1length + s2length + 1) * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1length; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < s2length; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}

