#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: source string to append
 * @dest: destination string
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;
	int len1;
	int len2;

	for (i = 0; src[i] != '\0'; i++)
	{
		len1 = i;
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		len2 = j;
	}
	for (k = 0; src[k] <= len1; k++)
	{
		dest[len1 + k] = src[k];
	}
	return (dest);
}
