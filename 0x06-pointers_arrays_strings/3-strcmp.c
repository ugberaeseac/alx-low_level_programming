#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if match -ve if s1 < s2 +ve if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((s1[i] - s2[i]));
		}
	}
	return (0);
}
