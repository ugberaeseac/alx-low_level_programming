#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of n string in s2 to concatenate with s1
 *
 * Return: Pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int length1 = 0, length2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		length1++;
	for (j = 0; s2[j] != '\0'; j++)
		length2++;

	ptr = malloc((length1 + n + 1) * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}

	if (n >= length2)
	{
		n = length2;
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
	free(ptr);
}
