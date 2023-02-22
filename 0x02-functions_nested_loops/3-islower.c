#include "main.h"

/**
 * _islower - checks for a lowercase character
 * Return 0 if lowercase 1 if otheriwse
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
