#include "main.h"

/**
 * _strncpy - function that copies n characters  from a string
 * @src: source string
 * @dest: destination string
 * @n: number of charcters to copy
 *
 * Return: a pointer to the destination
 */
_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

return (dest);
}
