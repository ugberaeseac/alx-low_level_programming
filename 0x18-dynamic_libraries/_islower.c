#include "main.h"

/**
 * _islower - Function that checks for a lowercase character
 * @c: the character to be checked
 *
 * Return: 1 Success
 */
int _islower(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
		a = 1;
	}
	else
		a = 0;
return (a);
}
