#include "main.h"

/**
 * *_strcpy - copy the string pointed to by *src to *dest
 * @dest: char type pointer
 * @src: char type pointer
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}