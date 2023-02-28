#include "main.h"

/**
 * rev_string - function that print a string in reverse
 * @s: String array to print
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		++s;
	}
	s--;
	j = i;
	while (j > 0)
	{
		return(*s);
		j--;
		s--;
	}
	_putchar('\n');
}
