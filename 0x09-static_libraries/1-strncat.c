#include "main.h"

/**
 * _strncat - function that concatenates two strings by n number of bytes
 * @src: source string to append
 * @dest: destination string
 * @n: n number of bytes to concatenate
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != src[n]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
return (dest);
}
