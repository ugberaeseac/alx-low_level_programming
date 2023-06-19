#include "main.h"

/**
 * _strspn - function that gets the lenght of a prefixed string
 * @s: The string to search
 * @accept: The prefix to be matched
 *
 * Return:  number of bytes matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;

	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (accept[j] == s[i])
		{
			flag++;
			break;
		}
		}
	if (accept[j] == '\0')
	break;
	}
	return (flag);
}
