#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: String to be checked
 * @accept: string characters to check
 *
 * Return: a pointer to the string s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
