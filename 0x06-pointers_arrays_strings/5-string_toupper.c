#include "main.h"

/**
 * string_toupper - function that converts all lowercase letters to uppercase
 * @c: charcter pointer
 *
 * Return: c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}
return (c);
}
