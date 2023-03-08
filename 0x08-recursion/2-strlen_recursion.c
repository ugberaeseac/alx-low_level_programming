#include "main.h"

/**
 * _strlen_recursion - function that returns the length of string
 * @s: string to return its length
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
