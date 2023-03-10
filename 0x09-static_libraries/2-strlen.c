#include "main.h"

/**
 * _strlen - functions to return the length of a string
 * @s: char value
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
