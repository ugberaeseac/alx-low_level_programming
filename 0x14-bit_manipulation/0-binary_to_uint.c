#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, strlength = 0;
	unsigned int total = 0, intvalue = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		strlength++;

	for ((i = strlength - 1); i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				total += intvalue;
			}
			intvalue *= 2;
		}
		else
		{
			return (0);
		}
	}

return (total);
}
